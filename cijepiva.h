// ************************************************************************ //
// Invokable interface declaration header for cijepiva
// ************************************************************************ //
#ifndef   cijepivaH
#define   cijepivaH

#include <System.hpp>
#include <Soap.InvokeRegistry.hpp>
#include <Soap.XSBuiltIns.hpp>
#include <System.Types.hpp>

// ************************************************************************ //
//  Enums exposed via SOAP must be byte-aligned
// ************************************************************************ //
#pragma option -b-

#pragma option -b.

// ************************************************************************ //
//  To expose complex types via SOAP, the type must derive from TRemotable
//  All published members of the type will be exposed.
// ************************************************************************ //


// ************************************************************************ //
//  Remotable arrays must be Dynamic arrays since they must be discoverable
//  at runtime.
// ************************************************************************ //
typedef DynamicArray<double>  TDoubleArray;


// ************************************************************************ //
//  Invokable interfaces must derive from IInvokable
//  The methods of the interface will be exposed via SOAP
// ************************************************************************ //
__interface INTERFACE_UUID("{CA8B74E8-99A6-403A-A6E3-8BD02571FADB}") Icijepiva : public IInvokable
{
public:
	virtual int         cjp(int a, int b) = 0;
	virtual int         cjpdodaj(int a, int b) = 0;

};
typedef DelphiInterface<Icijepiva> _di_Icijepiva;


#endif // cijepivaH
//---------------------------------------------------------------------------


