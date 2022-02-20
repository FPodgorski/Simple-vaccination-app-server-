
//---------------------------------------------------------------------------
#include "WebModuleUnit1.h"
#include <vector>
#include <sstream>
#include <System.NetEncoding.hpp>
#include <System.StrUtils.hpp>
#include "FormUnit1.h"
#include "baza.h"
#include "vrijeme.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TComponentClass WebModuleClass = __classid(TWebModule1);
//---------------------------------------------------------------------------
__fastcall TWebModule1::TWebModule1(TComponent* Owner)
	: TWebModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::WebModule1DefaultHandlerAction(TObject *Sender,
      TWebRequest *Request, TWebResponse *Response, bool &Handled)
{

	if( Request->QueryFields->Values["a"].LowerCase()=="vrj")
		WebModule1vrijemeActAction(Sender, Request, Response, Handled);
	else  if(Request->QueryFields->Values["a"].LowerCase()=="pri"){
		WebModule1pristupActAction(Sender, Request, Response, Handled);
     }else
	  Response->Content =
	"<html>"
	"<head><title>Web Server Application</title></head>"
	"<body>Web Server Application</body>"
	"</html>";
}
//---------------------------------------------------------------------------



void __fastcall TWebModule1::WebModule1vrijemeActAction(TObject *Sender, TWebRequest *Request,
          TWebResponse *Response, bool &Handled)
{


   if(Request->MethodType == mtGet){
	try{
		UnicodeString format = Request->QueryFields->Values["format"].LowerCase();
		UnicodeString A = Form2->DateTimePicker1->Time;
		UnicodeString B = Form2->DateTimePicker1->Date;


		if(format=="xml"){
                String xml = "<Dat>";
				xml += "<vrijeme>" + A + "</vrijeme>";
				xml += "<datum>" + B + "</datum>";
				xml += "</Dat>";
                Response->ContentType = "application/xml; charset=UTF-8";
				Response->Content = xml;
				Response->StatusCode = 200;
				Response->ReasonString = "OK";
		}
		else if(format=="json"){
			String json = "{\"Vrjidat\": {";
			json +="\"vrijeme\": \""+ A+"\" ,";
			json +="\"datum\": \""+ B +"\" ,";
			json += "}}";
			Response->ContentType = "application/json; charset=UTF-8";
				Response->Content = json;
				Response->StatusCode = 200;
				Response->ReasonString = "OK";
		}
		else if(format=="tekst"){
                 Response->Content ="Vrijeme: " + A + " Datum: " +B;
				Response->StatusCode = 200;
				Response->ReasonString = "OK";
		}

	}
		catch(Exception& E){
		Response->StatusCode = 400;
		Response->ReasonString = "Bad request";
		Response->ContentType = "text/plain; charset=UTF-8";
		Response->Content = E.Message;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TWebModule1::WebModule1pristupActAction(TObject *Sender, TWebRequest *Request,
          TWebResponse *Response, bool &Handled)
{
	if(Request->MethodType == mtPost){
			UnicodeString time1 = Request->QueryFields->Values["time"];
			UnicodeString date1 = Request->QueryFields->Values["date"];
			_di_IXMLvrijemeType vrijemexml = Getvrijeme(Form2->XMLDocument1);
			_di_IXMLpristupType pristup =  vrijemexml ->Add();
			pristup->time=time1;
			pristup->date=date1;
            Form2->XMLDocument1->SaveToFile(Form2->XMLDocument1->FileName);
	}
}
//---------------------------------------------------------------------------

