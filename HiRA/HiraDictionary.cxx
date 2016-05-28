// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME HiraDictionary

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "Hira.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Hira(void *p = 0);
   static void *newArray_Hira(Long_t size, void *p);
   static void delete_Hira(void *p);
   static void deleteArray_Hira(void *p);
   static void destruct_Hira(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hira*)
   {
      ::Hira *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Hira >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Hira", ::Hira::Class_Version(), "Hira.h", 173,
                  typeid(::Hira), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Hira::Dictionary, isa_proxy, 4,
                  sizeof(::Hira) );
      instance.SetNew(&new_Hira);
      instance.SetNewArray(&newArray_Hira);
      instance.SetDelete(&delete_Hira);
      instance.SetDeleteArray(&deleteArray_Hira);
      instance.SetDestructor(&destruct_Hira);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hira*)
   {
      return GenerateInitInstanceLocal((::Hira*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Hira*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Si(void *p = 0);
   static void *newArray_Si(Long_t size, void *p);
   static void delete_Si(void *p);
   static void deleteArray_Si(void *p);
   static void destruct_Si(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Si*)
   {
      ::Si *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Si >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Si", ::Si::Class_Version(), "Hira.h", 9,
                  typeid(::Si), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Si::Dictionary, isa_proxy, 4,
                  sizeof(::Si) );
      instance.SetNew(&new_Si);
      instance.SetNewArray(&newArray_Si);
      instance.SetDelete(&delete_Si);
      instance.SetDeleteArray(&deleteArray_Si);
      instance.SetDestructor(&destruct_Si);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Si*)
   {
      return GenerateInitInstanceLocal((::Si*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Si*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CsI(void *p = 0);
   static void *newArray_CsI(Long_t size, void *p);
   static void delete_CsI(void *p);
   static void deleteArray_CsI(void *p);
   static void destruct_CsI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CsI*)
   {
      ::CsI *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CsI >(0);
      static ::ROOT::TGenericClassInfo 
         instance("CsI", ::CsI::Class_Version(), "Hira.h", 56,
                  typeid(::CsI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CsI::Dictionary, isa_proxy, 4,
                  sizeof(::CsI) );
      instance.SetNew(&new_CsI);
      instance.SetNewArray(&newArray_CsI);
      instance.SetDelete(&delete_CsI);
      instance.SetDeleteArray(&deleteArray_CsI);
      instance.SetDestructor(&destruct_CsI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CsI*)
   {
      return GenerateInitInstanceLocal((::CsI*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::CsI*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Reconstruction(void *p = 0);
   static void *newArray_Reconstruction(Long_t size, void *p);
   static void delete_Reconstruction(void *p);
   static void deleteArray_Reconstruction(void *p);
   static void destruct_Reconstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Reconstruction*)
   {
      ::Reconstruction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Reconstruction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Reconstruction", ::Reconstruction::Class_Version(), "Hira.h", 94,
                  typeid(::Reconstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Reconstruction::Dictionary, isa_proxy, 4,
                  sizeof(::Reconstruction) );
      instance.SetNew(&new_Reconstruction);
      instance.SetNewArray(&newArray_Reconstruction);
      instance.SetDelete(&delete_Reconstruction);
      instance.SetDeleteArray(&deleteArray_Reconstruction);
      instance.SetDestructor(&destruct_Reconstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Reconstruction*)
   {
      return GenerateInitInstanceLocal((::Reconstruction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Reconstruction*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Mcp(void *p = 0);
   static void *newArray_Mcp(Long_t size, void *p);
   static void delete_Mcp(void *p);
   static void deleteArray_Mcp(void *p);
   static void destruct_Mcp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Mcp*)
   {
      ::Mcp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Mcp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Mcp", ::Mcp::Class_Version(), "Hira.h", 141,
                  typeid(::Mcp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Mcp::Dictionary, isa_proxy, 4,
                  sizeof(::Mcp) );
      instance.SetNew(&new_Mcp);
      instance.SetNewArray(&newArray_Mcp);
      instance.SetDelete(&delete_Mcp);
      instance.SetDeleteArray(&deleteArray_Mcp);
      instance.SetDestructor(&destruct_Mcp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Mcp*)
   {
      return GenerateInitInstanceLocal((::Mcp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Mcp*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Hira::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Hira::Class_Name()
{
   return "Hira";
}

//______________________________________________________________________________
const char *Hira::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hira*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Hira::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hira*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hira::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hira*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hira::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hira*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Si::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Si::Class_Name()
{
   return "Si";
}

//______________________________________________________________________________
const char *Si::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Si*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Si::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Si*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Si::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Si*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Si::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Si*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CsI::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *CsI::Class_Name()
{
   return "CsI";
}

//______________________________________________________________________________
const char *CsI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsI*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int CsI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CsI*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CsI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsI*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CsI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CsI*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Reconstruction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Reconstruction::Class_Name()
{
   return "Reconstruction";
}

//______________________________________________________________________________
const char *Reconstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reconstruction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Reconstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reconstruction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Reconstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reconstruction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Reconstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reconstruction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Mcp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Mcp::Class_Name()
{
   return "Mcp";
}

//______________________________________________________________________________
const char *Mcp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mcp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Mcp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Mcp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Mcp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mcp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Mcp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Mcp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Hira::Streamer(TBuffer &R__b)
{
   // Stream an object of class Hira.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Hira::Class(),this);
   } else {
      R__b.WriteClassBuffer(Hira::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Hira(void *p) {
      return  p ? new(p) ::Hira : new ::Hira;
   }
   static void *newArray_Hira(Long_t nElements, void *p) {
      return p ? new(p) ::Hira[nElements] : new ::Hira[nElements];
   }
   // Wrapper around operator delete
   static void delete_Hira(void *p) {
      delete ((::Hira*)p);
   }
   static void deleteArray_Hira(void *p) {
      delete [] ((::Hira*)p);
   }
   static void destruct_Hira(void *p) {
      typedef ::Hira current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Hira

//______________________________________________________________________________
void Si::Streamer(TBuffer &R__b)
{
   // Stream an object of class Si.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Si::Class(),this);
   } else {
      R__b.WriteClassBuffer(Si::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Si(void *p) {
      return  p ? new(p) ::Si : new ::Si;
   }
   static void *newArray_Si(Long_t nElements, void *p) {
      return p ? new(p) ::Si[nElements] : new ::Si[nElements];
   }
   // Wrapper around operator delete
   static void delete_Si(void *p) {
      delete ((::Si*)p);
   }
   static void deleteArray_Si(void *p) {
      delete [] ((::Si*)p);
   }
   static void destruct_Si(void *p) {
      typedef ::Si current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Si

//______________________________________________________________________________
void CsI::Streamer(TBuffer &R__b)
{
   // Stream an object of class CsI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(CsI::Class(),this);
   } else {
      R__b.WriteClassBuffer(CsI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CsI(void *p) {
      return  p ? new(p) ::CsI : new ::CsI;
   }
   static void *newArray_CsI(Long_t nElements, void *p) {
      return p ? new(p) ::CsI[nElements] : new ::CsI[nElements];
   }
   // Wrapper around operator delete
   static void delete_CsI(void *p) {
      delete ((::CsI*)p);
   }
   static void deleteArray_CsI(void *p) {
      delete [] ((::CsI*)p);
   }
   static void destruct_CsI(void *p) {
      typedef ::CsI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CsI

//______________________________________________________________________________
void Reconstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class Reconstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Reconstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(Reconstruction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Reconstruction(void *p) {
      return  p ? new(p) ::Reconstruction : new ::Reconstruction;
   }
   static void *newArray_Reconstruction(Long_t nElements, void *p) {
      return p ? new(p) ::Reconstruction[nElements] : new ::Reconstruction[nElements];
   }
   // Wrapper around operator delete
   static void delete_Reconstruction(void *p) {
      delete ((::Reconstruction*)p);
   }
   static void deleteArray_Reconstruction(void *p) {
      delete [] ((::Reconstruction*)p);
   }
   static void destruct_Reconstruction(void *p) {
      typedef ::Reconstruction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Reconstruction

//______________________________________________________________________________
void Mcp::Streamer(TBuffer &R__b)
{
   // Stream an object of class Mcp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Mcp::Class(),this);
   } else {
      R__b.WriteClassBuffer(Mcp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Mcp(void *p) {
      return  p ? new(p) ::Mcp : new ::Mcp;
   }
   static void *newArray_Mcp(Long_t nElements, void *p) {
      return p ? new(p) ::Mcp[nElements] : new ::Mcp[nElements];
   }
   // Wrapper around operator delete
   static void delete_Mcp(void *p) {
      delete ((::Mcp*)p);
   }
   static void deleteArray_Mcp(void *p) {
      delete [] ((::Mcp*)p);
   }
   static void destruct_Mcp(void *p) {
      typedef ::Mcp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Mcp

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_HiraDictionary_Impl() {
    static const char* headers[] = {
"Hira.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/root",
"/home/xzy3186/CODE/MSU/e09084Unpacker/HiRA/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "HiraDictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$Hira.h")))  Hira;
class __attribute__((annotate("$clingAutoload$Hira.h")))  Si;
class __attribute__((annotate("$clingAutoload$Hira.h")))  CsI;
class __attribute__((annotate("$clingAutoload$Hira.h")))  Reconstruction;
class __attribute__((annotate("$clingAutoload$Hira.h")))  Mcp;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "HiraDictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Hira.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CsI", payloadCode, "@",
"Hira", payloadCode, "@",
"Mcp", payloadCode, "@",
"Reconstruction", payloadCode, "@",
"Si", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("HiraDictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_HiraDictionary_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_HiraDictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_HiraDictionary() {
  TriggerDictionaryInitialization_HiraDictionary_Impl();
}
