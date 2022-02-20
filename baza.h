//---------------------------------------------------------------------------

#ifndef bazaH
#define bazaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdCustomTCPServer.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <IdTCPServer.hpp>
#include <IdContext.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPServer.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TIdTCPServer *IdTCPServer1;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TDataSource *DataSource1;
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
	TIdUDPServer *IdUDPServer1;
	TDateTimePicker *DateTimePicker1;
	TListView *ListView1;
	TXMLDocument *XMLDocument1;
	TAutoIncField *ADOTable1ID;
	TIntegerField *ADOTable1OIB;
	TWideStringField *ADOTable1Cijepivo;
	TDateTimeField *ADOTable1Datum;
	TLabel *Label2;
	TDBEdit *DBEdit1;
	TLabel *Label3;
	TDBEdit *DBEdit2;
	TLabel *Label4;
	TDBEdit *DBEdit3;
	TLabel *Label5;
	TDBEdit *DBEdit4;
	TLabel *Label1;
	void __fastcall IdTCPServer1Execute(TIdContext *AContext);
	void __fastcall IdUDPServer1UDPRead(TIdUDPListenerThread *AThread, const TIdBytes AData,
		  TIdSocketHandle *ABinding);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};

class Paket{
public:
	wchar_t OIB[255];
	wchar_t cijepivo[255];
	wchar_t datum[255];
    wchar_t hash[255];
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
