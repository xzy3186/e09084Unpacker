// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME S800Dictionary

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
#include "S800.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_S800(void *p = 0);
   static void *newArray_S800(Long_t size, void *p);
   static void delete_S800(void *p);
   static void deleteArray_S800(void *p);
   static void destruct_S800(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::S800*)
   {
      ::S800 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::S800 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("S800", ::S800::Class_Version(), "S800.h", 259,
                  typeid(::S800), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::S800::Dictionary, isa_proxy, 4,
                  sizeof(::S800) );
      instance.SetNew(&new_S800);
      instance.SetNewArray(&newArray_S800);
      instance.SetDelete(&delete_S800);
      instance.SetDeleteArray(&deleteArray_S800);
      instance.SetDestructor(&destruct_S800);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::S800*)
   {
      return GenerateInitInstanceLocal((::S800*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::S800*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTimeOfFlight(void *p = 0);
   static void *newArray_GTimeOfFlight(Long_t size, void *p);
   static void delete_GTimeOfFlight(void *p);
   static void deleteArray_GTimeOfFlight(void *p);
   static void destruct_GTimeOfFlight(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTimeOfFlight*)
   {
      ::GTimeOfFlight *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTimeOfFlight >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTimeOfFlight", ::GTimeOfFlight::Class_Version(), "S800.h", 13,
                  typeid(::GTimeOfFlight), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GTimeOfFlight::Dictionary, isa_proxy, 4,
                  sizeof(::GTimeOfFlight) );
      instance.SetNew(&new_GTimeOfFlight);
      instance.SetNewArray(&newArray_GTimeOfFlight);
      instance.SetDelete(&delete_GTimeOfFlight);
      instance.SetDeleteArray(&deleteArray_GTimeOfFlight);
      instance.SetDestructor(&destruct_GTimeOfFlight);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTimeOfFlight*)
   {
      return GenerateInitInstanceLocal((::GTimeOfFlight*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTimeOfFlight*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GTrigger(void *p = 0);
   static void *newArray_GTrigger(Long_t size, void *p);
   static void delete_GTrigger(void *p);
   static void deleteArray_GTrigger(void *p);
   static void destruct_GTrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GTrigger*)
   {
      ::GTrigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GTrigger >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GTrigger", ::GTrigger::Class_Version(), "S800.h", 63,
                  typeid(::GTrigger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GTrigger::Dictionary, isa_proxy, 4,
                  sizeof(::GTrigger) );
      instance.SetNew(&new_GTrigger);
      instance.SetNewArray(&newArray_GTrigger);
      instance.SetDelete(&delete_GTrigger);
      instance.SetDeleteArray(&deleteArray_GTrigger);
      instance.SetDestructor(&destruct_GTrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GTrigger*)
   {
      return GenerateInitInstanceLocal((::GTrigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GTrigger*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GScintillator(void *p = 0);
   static void *newArray_GScintillator(Long_t size, void *p);
   static void delete_GScintillator(void *p);
   static void deleteArray_GScintillator(void *p);
   static void destruct_GScintillator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GScintillator*)
   {
      ::GScintillator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GScintillator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GScintillator", ::GScintillator::Class_Version(), "S800.h", 106,
                  typeid(::GScintillator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GScintillator::Dictionary, isa_proxy, 4,
                  sizeof(::GScintillator) );
      instance.SetNew(&new_GScintillator);
      instance.SetNewArray(&newArray_GScintillator);
      instance.SetDelete(&delete_GScintillator);
      instance.SetDeleteArray(&deleteArray_GScintillator);
      instance.SetDestructor(&destruct_GScintillator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GScintillator*)
   {
      return GenerateInitInstanceLocal((::GScintillator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GScintillator*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GIonChamber(void *p = 0);
   static void *newArray_GIonChamber(Long_t size, void *p);
   static void delete_GIonChamber(void *p);
   static void deleteArray_GIonChamber(void *p);
   static void destruct_GIonChamber(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GIonChamber*)
   {
      ::GIonChamber *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GIonChamber >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GIonChamber", ::GIonChamber::Class_Version(), "S800.h", 180,
                  typeid(::GIonChamber), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GIonChamber::Dictionary, isa_proxy, 4,
                  sizeof(::GIonChamber) );
      instance.SetNew(&new_GIonChamber);
      instance.SetNewArray(&newArray_GIonChamber);
      instance.SetDelete(&delete_GIonChamber);
      instance.SetDeleteArray(&deleteArray_GIonChamber);
      instance.SetDestructor(&destruct_GIonChamber);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GIonChamber*)
   {
      return GenerateInitInstanceLocal((::GIonChamber*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GIonChamber*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GHodoscope(void *p = 0);
   static void *newArray_GHodoscope(Long_t size, void *p);
   static void delete_GHodoscope(void *p);
   static void deleteArray_GHodoscope(void *p);
   static void destruct_GHodoscope(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GHodoscope*)
   {
      ::GHodoscope *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GHodoscope >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GHodoscope", ::GHodoscope::Class_Version(), "S800.h", 155,
                  typeid(::GHodoscope), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GHodoscope::Dictionary, isa_proxy, 4,
                  sizeof(::GHodoscope) );
      instance.SetNew(&new_GHodoscope);
      instance.SetNewArray(&newArray_GHodoscope);
      instance.SetDelete(&delete_GHodoscope);
      instance.SetDeleteArray(&deleteArray_GHodoscope);
      instance.SetDestructor(&destruct_GHodoscope);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GHodoscope*)
   {
      return GenerateInitInstanceLocal((::GHodoscope*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GHodoscope*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GCrdc(void *p = 0);
   static void *newArray_GCrdc(Long_t size, void *p);
   static void delete_GCrdc(void *p);
   static void deleteArray_GCrdc(void *p);
   static void destruct_GCrdc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GCrdc*)
   {
      ::GCrdc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GCrdc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GCrdc", ::GCrdc::Class_Version(), "S800.h", 209,
                  typeid(::GCrdc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GCrdc::Dictionary, isa_proxy, 4,
                  sizeof(::GCrdc) );
      instance.SetNew(&new_GCrdc);
      instance.SetNewArray(&newArray_GCrdc);
      instance.SetDelete(&delete_GCrdc);
      instance.SetDeleteArray(&deleteArray_GCrdc);
      instance.SetDestructor(&destruct_GCrdc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GCrdc*)
   {
      return GenerateInitInstanceLocal((::GCrdc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GCrdc*)0x0); R__UseDummy(_R__UNIQUE_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr S800::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *S800::Class_Name()
{
   return "S800";
}

//______________________________________________________________________________
const char *S800::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::S800*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int S800::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::S800*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *S800::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::S800*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *S800::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::S800*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTimeOfFlight::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTimeOfFlight::Class_Name()
{
   return "GTimeOfFlight";
}

//______________________________________________________________________________
const char *GTimeOfFlight::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTimeOfFlight*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTimeOfFlight::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTimeOfFlight*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTimeOfFlight::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTimeOfFlight*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTimeOfFlight::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTimeOfFlight*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GTrigger::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GTrigger::Class_Name()
{
   return "GTrigger";
}

//______________________________________________________________________________
const char *GTrigger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTrigger*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GTrigger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GTrigger*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GTrigger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTrigger*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GTrigger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GTrigger*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GScintillator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GScintillator::Class_Name()
{
   return "GScintillator";
}

//______________________________________________________________________________
const char *GScintillator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GScintillator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GScintillator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GScintillator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GScintillator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GScintillator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GScintillator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GScintillator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GIonChamber::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GIonChamber::Class_Name()
{
   return "GIonChamber";
}

//______________________________________________________________________________
const char *GIonChamber::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIonChamber*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GIonChamber::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GIonChamber*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GIonChamber::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIonChamber*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GIonChamber::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GIonChamber*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GHodoscope::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GHodoscope::Class_Name()
{
   return "GHodoscope";
}

//______________________________________________________________________________
const char *GHodoscope::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GHodoscope*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GHodoscope::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GHodoscope*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GHodoscope::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GHodoscope*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GHodoscope::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GHodoscope*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GCrdc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GCrdc::Class_Name()
{
   return "GCrdc";
}

//______________________________________________________________________________
const char *GCrdc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GCrdc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GCrdc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GCrdc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GCrdc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GCrdc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GCrdc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GCrdc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void S800::Streamer(TBuffer &R__b)
{
   // Stream an object of class S800.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(S800::Class(),this);
   } else {
      R__b.WriteClassBuffer(S800::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_S800(void *p) {
      return  p ? new(p) ::S800 : new ::S800;
   }
   static void *newArray_S800(Long_t nElements, void *p) {
      return p ? new(p) ::S800[nElements] : new ::S800[nElements];
   }
   // Wrapper around operator delete
   static void delete_S800(void *p) {
      delete ((::S800*)p);
   }
   static void deleteArray_S800(void *p) {
      delete [] ((::S800*)p);
   }
   static void destruct_S800(void *p) {
      typedef ::S800 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::S800

//______________________________________________________________________________
void GTimeOfFlight::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTimeOfFlight.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTimeOfFlight::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTimeOfFlight::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTimeOfFlight(void *p) {
      return  p ? new(p) ::GTimeOfFlight : new ::GTimeOfFlight;
   }
   static void *newArray_GTimeOfFlight(Long_t nElements, void *p) {
      return p ? new(p) ::GTimeOfFlight[nElements] : new ::GTimeOfFlight[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTimeOfFlight(void *p) {
      delete ((::GTimeOfFlight*)p);
   }
   static void deleteArray_GTimeOfFlight(void *p) {
      delete [] ((::GTimeOfFlight*)p);
   }
   static void destruct_GTimeOfFlight(void *p) {
      typedef ::GTimeOfFlight current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTimeOfFlight

//______________________________________________________________________________
void GTrigger::Streamer(TBuffer &R__b)
{
   // Stream an object of class GTrigger.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GTrigger::Class(),this);
   } else {
      R__b.WriteClassBuffer(GTrigger::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GTrigger(void *p) {
      return  p ? new(p) ::GTrigger : new ::GTrigger;
   }
   static void *newArray_GTrigger(Long_t nElements, void *p) {
      return p ? new(p) ::GTrigger[nElements] : new ::GTrigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_GTrigger(void *p) {
      delete ((::GTrigger*)p);
   }
   static void deleteArray_GTrigger(void *p) {
      delete [] ((::GTrigger*)p);
   }
   static void destruct_GTrigger(void *p) {
      typedef ::GTrigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GTrigger

//______________________________________________________________________________
void GScintillator::Streamer(TBuffer &R__b)
{
   // Stream an object of class GScintillator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GScintillator::Class(),this);
   } else {
      R__b.WriteClassBuffer(GScintillator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GScintillator(void *p) {
      return  p ? new(p) ::GScintillator : new ::GScintillator;
   }
   static void *newArray_GScintillator(Long_t nElements, void *p) {
      return p ? new(p) ::GScintillator[nElements] : new ::GScintillator[nElements];
   }
   // Wrapper around operator delete
   static void delete_GScintillator(void *p) {
      delete ((::GScintillator*)p);
   }
   static void deleteArray_GScintillator(void *p) {
      delete [] ((::GScintillator*)p);
   }
   static void destruct_GScintillator(void *p) {
      typedef ::GScintillator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GScintillator

//______________________________________________________________________________
void GIonChamber::Streamer(TBuffer &R__b)
{
   // Stream an object of class GIonChamber.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GIonChamber::Class(),this);
   } else {
      R__b.WriteClassBuffer(GIonChamber::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GIonChamber(void *p) {
      return  p ? new(p) ::GIonChamber : new ::GIonChamber;
   }
   static void *newArray_GIonChamber(Long_t nElements, void *p) {
      return p ? new(p) ::GIonChamber[nElements] : new ::GIonChamber[nElements];
   }
   // Wrapper around operator delete
   static void delete_GIonChamber(void *p) {
      delete ((::GIonChamber*)p);
   }
   static void deleteArray_GIonChamber(void *p) {
      delete [] ((::GIonChamber*)p);
   }
   static void destruct_GIonChamber(void *p) {
      typedef ::GIonChamber current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GIonChamber

//______________________________________________________________________________
void GHodoscope::Streamer(TBuffer &R__b)
{
   // Stream an object of class GHodoscope.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GHodoscope::Class(),this);
   } else {
      R__b.WriteClassBuffer(GHodoscope::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GHodoscope(void *p) {
      return  p ? new(p) ::GHodoscope : new ::GHodoscope;
   }
   static void *newArray_GHodoscope(Long_t nElements, void *p) {
      return p ? new(p) ::GHodoscope[nElements] : new ::GHodoscope[nElements];
   }
   // Wrapper around operator delete
   static void delete_GHodoscope(void *p) {
      delete ((::GHodoscope*)p);
   }
   static void deleteArray_GHodoscope(void *p) {
      delete [] ((::GHodoscope*)p);
   }
   static void destruct_GHodoscope(void *p) {
      typedef ::GHodoscope current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GHodoscope

//______________________________________________________________________________
void GCrdc::Streamer(TBuffer &R__b)
{
   // Stream an object of class GCrdc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GCrdc::Class(),this);
   } else {
      R__b.WriteClassBuffer(GCrdc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GCrdc(void *p) {
      return  p ? new(p) ::GCrdc : new ::GCrdc;
   }
   static void *newArray_GCrdc(Long_t nElements, void *p) {
      return p ? new(p) ::GCrdc[nElements] : new ::GCrdc[nElements];
   }
   // Wrapper around operator delete
   static void delete_GCrdc(void *p) {
      delete ((::GCrdc*)p);
   }
   static void deleteArray_GCrdc(void *p) {
      delete [] ((::GCrdc*)p);
   }
   static void destruct_GCrdc(void *p) {
      typedef ::GCrdc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GCrdc

namespace ROOT {
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = 0);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 214,
                  typeid(vector<short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<short>*)0x0)->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete ((vector<short>*)p);
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] ((vector<short>*)p);
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short>

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
  void TriggerDictionaryInitialization_S800Dictionary_Impl() {
    static const char* headers[] = {
"S800.h",
0
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/root",
"/home/xzy3186/CODE/MSU/e09084Unpacker/S800/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "S800Dictionary dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$S800.h")))  S800;
class __attribute__((annotate("$clingAutoload$S800.h")))  GTimeOfFlight;
class __attribute__((annotate("$clingAutoload$S800.h")))  GTrigger;
class __attribute__((annotate("$clingAutoload$S800.h")))  GScintillator;
class __attribute__((annotate("$clingAutoload$S800.h")))  GIonChamber;
class __attribute__((annotate("$clingAutoload$S800.h")))  GHodoscope;
class __attribute__((annotate("$clingAutoload$S800.h")))  GCrdc;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "S800Dictionary dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "S800.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GCrdc", payloadCode, "@",
"GHodoscope", payloadCode, "@",
"GIonChamber", payloadCode, "@",
"GScintillator", payloadCode, "@",
"GTimeOfFlight", payloadCode, "@",
"GTrigger", payloadCode, "@",
"S800", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("S800Dictionary",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_S800Dictionary_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_S800Dictionary_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_S800Dictionary() {
  TriggerDictionaryInitialization_S800Dictionary_Impl();
}
