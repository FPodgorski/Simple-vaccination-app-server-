
// ************************************************************************* //
//                                                                         
//                            XML Data Binding                             
//                                                                         
//         Generated on: 28.6.2021. 15:35:03                               
//       Generated from: C:\Users\fpodg\Desktop\Projekt\SOAP\vrijeme.xml   
//   Settings stored in: C:\Users\fpodg\Desktop\Projekt\SOAP\vrijeme.xdb   
//                                                                         
// ************************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "vrijeme.h"


// Global Functions 

_di_IXMLvrijemeType __fastcall Getvrijeme(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLvrijemeType) Doc->GetDocBinding("vrijeme", __classid(TXMLvrijemeType), TargetNamespace);
};

_di_IXMLvrijemeType __fastcall Getvrijeme(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getvrijeme(DocIntf);
};

_di_IXMLvrijemeType __fastcall Loadvrijeme(const System::UnicodeString& FileName)
{
  return (_di_IXMLvrijemeType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("vrijeme", __classid(TXMLvrijemeType), TargetNamespace);
};

_di_IXMLvrijemeType __fastcall  Newvrijeme()
{
  return (_di_IXMLvrijemeType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("vrijeme", __classid(TXMLvrijemeType), TargetNamespace);
};

// TXMLvrijemeType 

void __fastcall TXMLvrijemeType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("pristup"), __classid(TXMLpristupType));
  ItemTag = "pristup";
  ItemInterface = __uuidof(IXMLpristupType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLpristupType __fastcall TXMLvrijemeType::Get_pristup(int Index)
{
  return (_di_IXMLpristupType) List->Nodes[Index];
};

_di_IXMLpristupType __fastcall TXMLvrijemeType::Add()
{
  return (_di_IXMLpristupType) AddItem(-1);
};

_di_IXMLpristupType __fastcall TXMLvrijemeType::Insert(const int Index)
{
  return (_di_IXMLpristupType) AddItem(Index);
};

// TXMLpristupType 

System::UnicodeString __fastcall TXMLpristupType::Get_time()
{
  return GetChildNodes()->Nodes[System::UnicodeString("time")]->Text;
};

void __fastcall TXMLpristupType::Set_time(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("time")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLpristupType::Get_date()
{
  return GetChildNodes()->Nodes[System::UnicodeString("date")]->Text;
};

void __fastcall TXMLpristupType::Set_date(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("date")]->NodeValue = Value;
};

// TXMLpristupTypeList 

_di_IXMLpristupType __fastcall TXMLpristupTypeList::Add()
{
  return (_di_IXMLpristupType) AddItem(-1);
};

_di_IXMLpristupType __fastcall TXMLpristupTypeList::Insert(const int Index)
{
  return (_di_IXMLpristupType) AddItem(Index);
};

_di_IXMLpristupType __fastcall TXMLpristupTypeList::Get_Item(int Index)
{
  return (_di_IXMLpristupType) List->Nodes[Index];
};
