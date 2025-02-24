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
// $hash=405f351887cd4d64177534dd1a362f1027126b0d$
//

#include "libcef_dll/ctocpp/views/panel_delegate_ctocpp.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/ctocpp/views/window_delegate_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefSize CefPanelDelegateCToCpp::GetPreferredSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_preferred_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefPanelDelegateCToCpp::GetMinimumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_minimum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefPanelDelegateCToCpp::GetMaximumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return CefSize();
  }

  // Execute
  cef_size_t _retval =
      _struct->get_maximum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefPanelDelegateCToCpp::GetHeightForWidth(CefRefPtr<CefView> view,
                                              int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return 0;
  }

  // Execute
  int _retval =
      _struct->get_height_for_width(_struct, CefViewCppToC::Wrap(view), width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnParentViewChanged(CefRefPtr<CefView> view,
                                                 bool added,
                                                 CefRefPtr<CefView> parent) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_parent_view_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }
  // Verify param: parent; type: refptr_diff
  DCHECK(parent.get());
  if (!parent.get()) {
    return;
  }

  // Execute
  _struct->on_parent_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                  CefViewCppToC::Wrap(parent));
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnChildViewChanged(CefRefPtr<CefView> view,
                                                bool added,
                                                CefRefPtr<CefView> child) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_child_view_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }
  // Verify param: child; type: refptr_diff
  DCHECK(child.get());
  if (!child.get()) {
    return;
  }

  // Execute
  _struct->on_child_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                 CefViewCppToC::Wrap(child));
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnWindowChanged(CefRefPtr<CefView> view,
                                             bool added) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_window_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_window_changed(_struct, CefViewCppToC::Wrap(view), added);
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnLayoutChanged(CefRefPtr<CefView> view,
                                             const CefRect& new_bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_layout_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_layout_changed(_struct, CefViewCppToC::Wrap(view), &new_bounds);
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnFocus(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_focus(_struct, CefViewCppToC::Wrap(view));
}

NO_SANITIZE("cfi-icall")
void CefPanelDelegateCToCpp::OnBlur(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_blur)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get()) {
    return;
  }

  // Execute
  _struct->on_blur(_struct, CefViewCppToC::Wrap(view));
}

// CONSTRUCTOR - Do not edit by hand.

CefPanelDelegateCToCpp::CefPanelDelegateCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefPanelDelegateCToCpp::~CefPanelDelegateCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_panel_delegate_t*
CefCToCppRefCounted<CefPanelDelegateCToCpp,
                    CefPanelDelegate,
                    cef_panel_delegate_t>::UnwrapDerived(CefWrapperType type,
                                                         CefPanelDelegate* c) {
  if (type == WT_WINDOW_DELEGATE) {
    return reinterpret_cast<cef_panel_delegate_t*>(
        CefWindowDelegateCToCpp::Unwrap(
            reinterpret_cast<CefWindowDelegate*>(c)));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefPanelDelegateCToCpp,
                                   CefPanelDelegate,
                                   cef_panel_delegate_t>::kWrapperType =
    WT_PANEL_DELEGATE;
