// ************************************************************************ //
// Implementation class for interface Icijepiva
// ************************************************************************ //
#include <stdio.h>
#include <vcl.h>
#pragma hdrstop

#if !defined(__cijepiva_h__)
#include "cijepiva.h"
#endif

// ************************************************************************ //
//  TcijepivaImpl implements interface Icijepiva
// ************************************************************************ //
class TcijepivaImpl : public TInvokableClass, public Icijepiva
{
public:
    /* Sample methods of Icijepiva */
  int         cjp(int a, int b) {return a - b;};
  int         cjpdodaj(int a, int b) {return a + b;};

  /* IUnknown */
  HRESULT STDMETHODCALLTYPE QueryInterface(const GUID& IID, void **Obj)
                        { return GetInterface(IID, Obj) ? S_OK : E_NOINTERFACE; }
  ULONG STDMETHODCALLTYPE AddRef() { return TInvokableClass::_AddRef();  }
  ULONG STDMETHODCALLTYPE Release() { return TInvokableClass::_Release();  }
};









static void __fastcall cijepivaFactory(System::TObject* &obj)
{
  static _di_Icijepiva iInstance;
  static TcijepivaImpl *instance = 0;
  if (!instance)
  {
    instance = new TcijepivaImpl();
    instance->GetInterface(iInstance);
  }
  obj = instance;
}

// ************************************************************************ //
//  The following routine registers the interface and implementation class
//  as well as the type used by the methods of the interface
// ************************************************************************ //
static void RegTypes()
{
  InvRegistry()->RegisterInterface(__delphirtti(Icijepiva));
  InvRegistry()->RegisterInvokableClass(__classid(TcijepivaImpl), cijepivaFactory);
}
#pragma startup RegTypes 32

