// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=5b181bf741072399ceb3c21ad010ce2bed04aab3$
//

#include "libcef_dll/cpptoc/shared_memory_region_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
shared_memory_region_is_valid(struct _cef_shared_memory_region_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefSharedMemoryRegionCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

size_t CEF_CALLBACK
shared_memory_region_size(struct _cef_shared_memory_region_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  size_t _retval = CefSharedMemoryRegionCppToC::Get(self)->Size();

  // Return type: simple
  return _retval;
}

const void* CEF_CALLBACK
shared_memory_region_memory(struct _cef_shared_memory_region_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  const void* _retval = CefSharedMemoryRegionCppToC::Get(self)->Memory();

  // Return type: simple
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefSharedMemoryRegionCppToC::CefSharedMemoryRegionCppToC() {
  GetStruct()->is_valid = shared_memory_region_is_valid;
  GetStruct()->size = shared_memory_region_size;
  GetStruct()->memory = shared_memory_region_memory;
}

// DESTRUCTOR - Do not edit by hand.

CefSharedMemoryRegionCppToC::~CefSharedMemoryRegionCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefSharedMemoryRegion> CefCppToCRefCounted<
    CefSharedMemoryRegionCppToC,
    CefSharedMemoryRegion,
    cef_shared_memory_region_t>::UnwrapDerived(CefWrapperType type,
                                               cef_shared_memory_region_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefSharedMemoryRegionCppToC,
                                   CefSharedMemoryRegion,
                                   cef_shared_memory_region_t>::kWrapperType =
    WT_SHARED_MEMORY_REGION;
