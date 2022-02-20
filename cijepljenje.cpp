
// ******************************************** //
//                                            
//              XML Data Binding              
//                                            
//         Generated on: 28.6.2021. 15:15:26  
//       Generated from: .\\cijepljenje.xml   
//   Settings stored in: .\\cijepljenje.xdb   
//                                            
// ******************************************** //

#include <System.hpp>
#pragma hdrstop

#include "cijepljenje.h"


// Global Functions 

_di_IXMLcijepljenjeType __fastcall Getcijepljenje(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLcijepljenjeType) Doc->GetDocBinding("cijepljenje", __classid(TXMLcijepljenjeType), TargetNamespace);
};

_di_IXMLcijepljenjeType __fastcall Getcijepljenje(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Getcijepljenje(DocIntf);
};

_di_IXMLcijepljenjeType __fastcall Loadcijepljenje(const System::UnicodeString& FileName)
{
  return (_di_IXMLcijepljenjeType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("cijepljenje", __classid(TXMLcijepljenjeType), TargetNamespace);
};

_di_IXMLcijepljenjeType __fastcall  Newcijepljenje()
{
  return (_di_IXMLcijepljenjeType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("cijepljenje", __classid(TXMLcijepljenjeType), TargetNamespace);
};

// TXMLcijepljenjeType 

void __fastcall TXMLcijepljenjeType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("lokacija"), __classid(TXMLlokacijaType));
  ItemTag = "lokacija";
  ItemInterface = __uuidof(IXMLlokacijaType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLlokacijaType __fastcall TXMLcijepljenjeType::Get_lokacija(int Index)
{
  return (_di_IXMLlokacijaType) List->Nodes[Index];
};

_di_IXMLlokacijaType __fastcall TXMLcijepljenjeType::Add()
{
  return (_di_IXMLlokacijaType) AddItem(-1);
};

_di_IXMLlokacijaType __fastcall TXMLcijepljenjeType::Insert(const int Index)
{
  return (_di_IXMLlokacijaType) AddItem(Index);
};

// TXMLlokacijaType 

System::UnicodeString __fastcall TXMLlokacijaType::Get_naziv()
{
  return GetChildNodes()->Nodes[System::UnicodeString("naziv")]->Text;
};

void __fastcall TXMLlokacijaType::Set_naziv(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("naziv")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLlokacijaType::Get_adresa()
{
  return GetChildNodes()->Nodes[System::UnicodeString("adresa")]->Text;
};

void __fastcall TXMLlokacijaType::Set_adresa(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("adresa")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLlokacijaType::Get_pocetak()
{
  return GetChildNodes()->Nodes[System::UnicodeString("pocetak")]->Text;
};

void __fastcall TXMLlokacijaType::Set_pocetak(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("pocetak")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLlokacijaType::Get_kraj()
{
  return GetChildNodes()->Nodes[System::UnicodeString("kraj")]->Text;
};

void __fastcall TXMLlokacijaType::Set_kraj(System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("kraj")]->NodeValue = Value;
};

int __fastcall TXMLlokacijaType::Get_brp()
{
  return GetChildNodes()->Nodes[System::UnicodeString("brp")]->NodeValue.operator int();
};

void __fastcall TXMLlokacijaType::Set_brp(int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("brp")]->NodeValue = Value;
};
