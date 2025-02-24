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
// $hash=4b3da65396a9a358cbcdb289e275062a7b4402d5$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_MEDIA_ACCESS_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_MEDIA_ACCESS_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_permission_handler_capi.h"
#include "include/cef_permission_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefMediaAccessCallbackCppToC
    : public CefCppToCRefCounted<CefMediaAccessCallbackCppToC,
                                 CefMediaAccessCallback,
                                 cef_media_access_callback_t> {
 public:
  CefMediaAccessCallbackCppToC();
  virtual ~CefMediaAccessCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_MEDIA_ACCESS_CALLBACK_CPPTOC_H_
