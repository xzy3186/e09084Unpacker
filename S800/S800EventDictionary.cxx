// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME S800EventDictionary

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
#include "S800Event.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_S800Event(void *p = 0);
   static void *newArray_S800Event(Long_t size, void *p);
   static void delete_S800Event(void *p);
   static void deleteArray_S800Event(void *p);
   static void destruct_S800Event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::S800Event*)
   {
      ::S800Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::S800Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("S800Event", ::S800Event::Class_Version(), "S800Event.h", 16,
                  typeid(::S800Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::S800Event::Dictionary, isa_proxy, 4,
                  sizeof(::S800Event) );
      instance.SetNew(&new_S800Event);
      instance.SetNewArray(&newArray_S800Event);
      instance.SetDelete(&delete_S800Event);
      instance.SetDeleteArray(&deleteArray_S800Event);
      instance.SetDestructor(&destruct_S800Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::S800Event*)
   {
      return GenerateInitInstanceLocal((::S800Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::S800Event*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr S800Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *S800Event::Class_Name()
{
   return "S800Event";
}

//______________________________________________________________________________
const char *S800Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::S800Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int S800Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::S800Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *S800Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::S800Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *S800Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::S800Event*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void S800Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class S800Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(S800Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(S800Event::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_S800Event(void *p) {
      return  p ? new(p) ::S800Event : new ::S800Event;
   }
   static void *newArray_S800Event(Long_t nElements, void *p) {
      return p ? new(p) ::S800Event[nElements] : new ::S800Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_S800Event(void *p) {
      delete ((::S800Event*)p);
   }
   static void deleteArray_S800Event(void *p) {
      delete [] ((::S800Event*)p);
   }
   static void destruct_S800Event(void *p) {
      typedef ::S800Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::S800Event

namespace {
  void TriggerDictionaryInitialization_S800EventDictionary_Impl() {
    static const char* headers[] = {
"S800Event.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/root",
"/home/xzy3186/CODE/MSU/e09084Unpacker/S800/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "S800EventDictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$S800Event.h")))  S800Event;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "S800EventDictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "S800Event.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"S800Event", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("S800EventDictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_S800EventDictionary_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_S800EventDictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_S800EventDictionary() {
  TriggerDictionaryInitialization_S800EventDictionary_Impl();
}
