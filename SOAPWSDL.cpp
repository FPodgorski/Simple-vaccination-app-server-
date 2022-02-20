// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml
//  >Import : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml>0
//  >Import : C:\Users\fpodg\Desktop\Projekt\SOAPWSDL.xml>1
// Version  : 1.0
// (27.6.2021. 19:17:44 - - $Rev: 96726 $)
// ************************************************************************ //

#include <System.hpp>
#pragma hdrstop

#include "SOAPWSDL.h"



namespace NS_SOAPWSDL {

_di_Icijepiva GetIcijepiva(bool useWSDL, System::String addr, Soaphttpclient::THTTPRIO* HTTPRIO)
{
  static const char* defWSDL= "C:\\Users\\fpodg\\Desktop\\Projekt\\SOAPWSDL.xml";
  static const char* defURL = "http://localhost:8080/soap/Icijepiva";
  static const char* defSvc = "Icijepivaservice";
  static const char* defPrt = "IcijepivaPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  Soaphttpclient::THTTPRIO* rio = HTTPRIO ? HTTPRIO : new Soaphttpclient::THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_Icijepiva service;
  rio->QueryInterface(service);
  if (!service && !HTTPRIO)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types exposed by the WebService.
// ************************************************************************ //
static void RegTypes()
{
  /* Icijepiva */
  InvRegistry()->RegisterInterface(__delphirtti(Icijepiva), L"urn:cijepiva-Icijepiva", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__delphirtti(Icijepiva), L"urn:cijepiva-Icijepiva#%operationName%");
  /* Icijepiva->echoEnum */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "echoEnum", "return_", L"return", L"");
  /* Icijepiva->echoDoubleArray */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "echoDoubleArray", "return_", L"return", L"");
  /* Icijepiva->echoStruct */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "echoStruct", "return_", L"return", L"");
  /* Icijepiva->echoDouble */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "echoDouble", "return_", L"return", L"");
  /* Icijepiva->cjp */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "cjp", "return_", L"return", L"");
  /* Icijepiva->cjpdodaj */
  InvRegistry()->RegisterParamInfo(__delphirtti(Icijepiva), "cjpdodaj", "return_", L"return", L"");
  /* TDoubleDynArray */
  RemClassRegistry()->RegisterXSInfo(__delphirtti(TDoubleDynArray), L"urn:cijepiva", L"TDoubleDynArray");
  /* TSampleStruct */
  RemClassRegistry()->RegisterXSClass(__classid(TSampleStruct), L"urn:@:cijepiva", L"TSampleStruct");
  /* SampleEnum */
  RemClassRegistry()->RegisterXSInfo(GetClsMemberTypeInfo(__typeinfo(SampleEnum_TypeInfoHolder)), L"urn:cijepiva", L"SampleEnum");
}
#pragma startup RegTypes 32

};     // NS_SOAPWSDL

