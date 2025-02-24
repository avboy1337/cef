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
// $hash=7436e1945600e337c6cbc3f25cc2d0d871515a0f$
//

#include "libcef_dll/ctocpp/find_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefFindHandlerCToCpp::OnFindResult(CefRefPtr<CefBrowser> browser,
                                        int identifier,
                                        int count,
                                        const CefRect& selectionRect,
                                        int activeMatchOrdinal,
                                        bool finalUpdate) {
  shutdown_checker::AssertNotShutdown();

  cef_find_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_find_result)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_find_result(_struct, CefBrowserCppToC::Wrap(browser), identifier,
                          count, &selectionRect, activeMatchOrdinal,
                          finalUpdate);
}

// CONSTRUCTOR - Do not edit by hand.

CefFindHandlerCToCpp::CefFindHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefFindHandlerCToCpp::~CefFindHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_find_handler_t*
CefCToCppRefCounted<CefFindHandlerCToCpp, CefFindHandler, cef_find_handler_t>::
    UnwrapDerived(CefWrapperType type, CefFindHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefFindHandlerCToCpp,
                                   CefFindHandler,
                                   cef_find_handler_t>::kWrapperType =
    WT_FIND_HANDLER;
