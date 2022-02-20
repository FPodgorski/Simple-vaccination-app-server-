//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "baza.h"
#include "vrijeme.h"
#include <IdHashSHA.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	_di_IXMLvrijemeType vrijemexml = Getvrijeme(XMLDocument1);
		ListView1->Items->Clear();
		for(int i=0;i<vrijemexml->Count;i++){
		ListView1->Items->Add();
			ListView1->Items->Item[i]->Caption = vrijemexml->pristup[i]->time;
			ListView1->Items->Item[i]->SubItems->Add(vrijemexml->pristup[i]->date);
		}
}
//---------------------------------------------------------------------------
String __fastcall SHA1Enkodiraj(UnicodeString text)
{
	 UnicodeString enkodirano;
	 TIdHashSHA1 *idsha1= new TIdHashSHA1();
	 enkodirano= idsha1->HashStringAsHex(text);
	 return enkodirano;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::IdTCPServer1Execute(TIdContext *AContext)
{
	UnicodeString oib = AContext->Connection->Socket->ReadLn();
	TLocateOptions Opts;
    Opts << loCaseInsensitive;
	Opts.Clear();	if(ADOTable1->Locate("OIB", oib, Opts) == true){

		ShowMessage("Pacijent je pronaden!");
		UnicodeString Cijepivo = ADOTable1->FieldByName("Cijepivo")->AsString;
		UnicodeString Datum = ADOTable1->FieldByName("Datum")->AsString;
		AContext->Connection->Socket->WriteLn(Cijepivo);
		AContext->Connection->Socket->WriteLn(Datum);

		}
		else
		ShowMessage("Pacijent nije pronaden!");



		AContext->Connection->Disconnect();

}

//---------------------------------------------------------------------------


void __fastcall TForm2::IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
          TIdSocketHandle *ABinding)
{
	Paket poruka;
	BytesToRaw(AData, &poruka, AData.Length);
	if(SHA1Enkodiraj(poruka.OIB)==poruka.hash){
	ADOTable1->Insert();
	DBEdit2->Text= poruka.OIB;
	DBEdit3->Text = poruka.cijepivo;
	DBEdit4->Text = poruka.datum;
	ADOTable1->Post();
    }
}
//---------------------------------------------------------------------------

