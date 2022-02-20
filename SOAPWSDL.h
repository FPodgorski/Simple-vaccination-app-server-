// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml
//  >Import : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml>0
//  >Import : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml>1
// Version  : 1.0
// (27.6.2021. 19:17:44 - - $Rev: 96726 $)
// ************************************************************************ //

#ifndef   SOAPWSDLH
#define   SOAPWSDLH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <Soap.SOAPHTTPClient.hpp>

#if !defined(SOAP_REMOTABLE_CLASS)
#define SOAP_REMOTABLE_CLASS __declspec(delphiclass)
#endif

namespace NS_SOAPWSDL {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Embarcadero types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"[Gbl]
// !:int             - "http://www.w3.org/2001/XMLSchema"[]
// !:double          - "http://www.w3.org/2001/XMLSchema"[Gbl]

class SOAP_REMOTABLE_CLASS TSampleStruct;

enum class SampleEnum   /* "urn:cijepiva"[GblSmpl] */
{
  etNone, 
  etAFew, 
  etSome, 
  etALot
};

class SampleEnum_TypeInfoHolder : public TObject {
  SampleEnum __instanceType;
public:
__published:
  __property SampleEnum __propType = { read=__instanceType };
};

typedef DynamicArray<double>      TDoubleDynArray; /* "urn:cijepiva"[GblCplx] */


// ************************************************************************ //
// XML       : TSampleStruct, global, <complexType>
// Namespace : urn:@:cijepiva
// ************************************************************************ //
class TSampleStruct : public TRemotable {
private:
  UnicodeString   FLastName;
  UnicodeString   FFirstName;
  double          FSalary;
__published:
  __property UnicodeString   LastName = { read=FLastName, write=FLastName };
  __property UnicodeString  FirstName = { read=FFirstName, write=FFirstName };
  __property double         Salary = { read=FSalary, write=FSalary };
};



// ************************************************************************ //
// Namespace : urn:cijepiva-Icijepiva
// soapAction: urn:cijepiva-Icijepiva#%operationName%
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// use       : encoded
// binding   : Icijepivabinding
// service   : Icijepivaservice
// port      : IcijepivaPort
// URL       : http://localhost:8080/soap/Icijepiva
// ************************************************************************ //
__interface INTERFACE_UUID("{4AAF1A15-E3C1-E5EF-8127-269486B41520}") Icijepiva : public IInvokable
{
public:
  virtual SampleEnum      echoEnum(const SampleEnum eValue) = 0; 
  virtual TDoubleDynArray echoDoubleArray(const TDoubleDynArray daValue) = 0; 
  virtual TSampleStruct*  echoStruct(const TSampleStruct* pEmployee) = 0; 
  virtual double          echoDouble(const double dValue) = 0; 
  virtual int             cjp(const int a, const int b) = 0; 
  virtual int             cjpdodaj(const int a, const int b) = 0; 
};
typedef DelphiInterface<Icijepiva> _di_Icijepiva;

_di_Icijepiva GetIcijepiva(bool useWSDL=false, System::String addr= System::String(), Soaphttpclient::THTTPRIO* HTTPRIO=0);


};     // NS_SOAPWSDL

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_SOAPWSDL;
#endif



#endif // SOAPWSDLH
