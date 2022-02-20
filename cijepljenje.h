
// ******************************************** //
//                                            
//              XML Data Binding              
//                                            
//         Generated on: 28.6.2021. 15:15:26  
//       Generated from: .\\cijepljenje.xml   
//   Settings stored in: .\\cijepljenje.xdb   
//                                            
// ******************************************** //

#ifndef   cijepljenjeH
#define   cijepljenjeH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLcijepljenjeType;
typedef System::DelphiInterface<IXMLcijepljenjeType> _di_IXMLcijepljenjeType;
__interface IXMLlokacijaType;
typedef System::DelphiInterface<IXMLlokacijaType> _di_IXMLlokacijaType;

// IXMLcijepljenjeType 

__interface INTERFACE_UUID("{B6C98AEF-BBF4-4AE9-9161-3A0FC303CDAB}") IXMLcijepljenjeType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLlokacijaType __fastcall Get_lokacija(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLlokacijaType __fastcall Add() = 0;
  virtual _di_IXMLlokacijaType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLlokacijaType lokacija[int Index] = { read=Get_lokacija };/* default */
};

// IXMLlokacijaType 

__interface INTERFACE_UUID("{EB2913B4-CCC9-4171-89E8-2965757B50EC}") IXMLlokacijaType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_naziv() = 0;
  virtual System::UnicodeString __fastcall Get_adresa() = 0;
  virtual System::UnicodeString __fastcall Get_pocetak() = 0;
  virtual System::UnicodeString __fastcall Get_kraj() = 0;
  virtual int __fastcall Get_brp() = 0;
  virtual void __fastcall Set_naziv(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_adresa(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_pocetak(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_kraj(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_brp(int Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString naziv = { read=Get_naziv, write=Set_naziv };
  __property System::UnicodeString adresa = { read=Get_adresa, write=Set_adresa };
  __property System::UnicodeString pocetak = { read=Get_pocetak, write=Set_pocetak };
  __property System::UnicodeString kraj = { read=Get_kraj, write=Set_kraj };
  __property int brp = { read=Get_brp, write=Set_brp };
};

// Forward Decls 

class TXMLcijepljenjeType;
class TXMLlokacijaType;

// TXMLcijepljenjeType 

class TXMLcijepljenjeType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLcijepljenjeType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLcijepljenjeType 
  virtual _di_IXMLlokacijaType __fastcall Get_lokacija(int Index);
  virtual _di_IXMLlokacijaType __fastcall Add();
  virtual _di_IXMLlokacijaType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLlokacijaType 

class TXMLlokacijaType : public Xml::Xmldoc::TXMLNode, public IXMLlokacijaType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLlokacijaType 
  virtual System::UnicodeString __fastcall Get_naziv();
  virtual System::UnicodeString __fastcall Get_adresa();
  virtual System::UnicodeString __fastcall Get_pocetak();
  virtual System::UnicodeString __fastcall Get_kraj();
  virtual int __fastcall Get_brp();
  virtual void __fastcall Set_naziv(System::UnicodeString Value);
  virtual void __fastcall Set_adresa(System::UnicodeString Value);
  virtual void __fastcall Set_pocetak(System::UnicodeString Value);
  virtual void __fastcall Set_kraj(System::UnicodeString Value);
  virtual void __fastcall Set_brp(int Value);
};

// Global Functions 

_di_IXMLcijepljenjeType __fastcall Getcijepljenje(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLcijepljenjeType __fastcall Getcijepljenje(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLcijepljenjeType __fastcall Loadcijepljenje(const System::UnicodeString& FileName);
_di_IXMLcijepljenjeType __fastcall  Newcijepljenje();

#define TargetNamespace ""

#endif