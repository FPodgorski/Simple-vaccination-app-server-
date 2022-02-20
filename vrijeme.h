
// ************************************************************************* //
//                                                                         
//                            XML Data Binding                             
//                                                                         
//         Generated on: 28.6.2021. 15:35:03                               
//       Generated from: C:\Users\fpodg\Desktop\Projekt\SOAP\vrijeme.xml   
//   Settings stored in: C:\Users\fpodg\Desktop\Projekt\SOAP\vrijeme.xdb   
//                                                                         
// ************************************************************************* //

#ifndef   vrijemeH
#define   vrijemeH

#include <System.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLvrijemeType;
typedef System::DelphiInterface<IXMLvrijemeType> _di_IXMLvrijemeType;
__interface IXMLpristupType;
typedef System::DelphiInterface<IXMLpristupType> _di_IXMLpristupType;
__interface IXMLpristupTypeList;
typedef System::DelphiInterface<IXMLpristupTypeList> _di_IXMLpristupTypeList;

// IXMLvrijemeType 

__interface INTERFACE_UUID("{BF414248-B1A8-4906-85EC-3115D958D06B}") IXMLvrijemeType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLpristupType __fastcall Get_pristup(int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLpristupType __fastcall Add() = 0;
  virtual _di_IXMLpristupType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLpristupType pristup[int Index] = { read=Get_pristup };/* default */
};

// IXMLpristupType 

__interface INTERFACE_UUID("{5B3CDDFD-966A-4A78-9DD7-E29ED54A9AA0}") IXMLpristupType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_time() = 0;
  virtual System::UnicodeString __fastcall Get_date() = 0;
  virtual void __fastcall Set_time(System::UnicodeString Value) = 0;
  virtual void __fastcall Set_date(System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString time = { read=Get_time, write=Set_time };
  __property System::UnicodeString date = { read=Get_date, write=Set_date };
};

// IXMLpristupTypeList 

__interface INTERFACE_UUID("{BF602022-1C1E-43DC-9800-FB69EACDC232}") IXMLpristupTypeList : public Xml::Xmlintf::IXMLNodeCollection
{
public:
  // Methods & Properties 
  virtual _di_IXMLpristupType __fastcall Add() = 0;
  virtual _di_IXMLpristupType __fastcall Insert(const int Index) = 0;

  virtual _di_IXMLpristupType __fastcall Get_Item(int Index) = 0;
  __property _di_IXMLpristupType Items[int Index] = { read=Get_Item /* default */ };
};

// Forward Decls 

class TXMLvrijemeType;
class TXMLpristupType;
class TXMLpristupTypeList;

// TXMLvrijemeType 

class TXMLvrijemeType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLvrijemeType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLvrijemeType 
  virtual _di_IXMLpristupType __fastcall Get_pristup(int Index);
  virtual _di_IXMLpristupType __fastcall Add();
  virtual _di_IXMLpristupType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLpristupType 

class TXMLpristupType : public Xml::Xmldoc::TXMLNode, public IXMLpristupType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLpristupType 
  virtual System::UnicodeString __fastcall Get_time();
  virtual System::UnicodeString __fastcall Get_date();
  virtual void __fastcall Set_time(System::UnicodeString Value);
  virtual void __fastcall Set_date(System::UnicodeString Value);
};

// TXMLpristupTypeList 

class TXMLpristupTypeList : public Xml::Xmldoc::TXMLNodeCollection, public IXMLpristupTypeList
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLpristupTypeList 
  virtual _di_IXMLpristupType __fastcall Add();
  virtual _di_IXMLpristupType __fastcall Insert(const int Index);

  virtual _di_IXMLpristupType __fastcall Get_Item(int Index);
};

// Global Functions 

_di_IXMLvrijemeType __fastcall Getvrijeme(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLvrijemeType __fastcall Getvrijeme(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLvrijemeType __fastcall Loadvrijeme(const System::UnicodeString& FileName);
_di_IXMLvrijemeType __fastcall  Newvrijeme();

#define TargetNamespace ""

#endif