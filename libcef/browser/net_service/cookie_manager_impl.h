// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that can
// be found in the LICENSE file.

#ifndef CEF_LIBCEF_BROWSER_NET_SERVICE_COOKIE_MANAGER_IMPL_H_
#define CEF_LIBCEF_BROWSER_NET_SERVICE_COOKIE_MANAGER_IMPL_H_

#include "include/cef_cookie.h"
#include "libcef/browser/browser_context.h"
#include "libcef/browser/thread_util.h"

#include "base/files/file_path.h"

// Implementation of the CefCookieManager interface. May be created on any
// thread.
class CefCookieManagerImpl : public CefCookieManager {
 public:
  CefCookieManagerImpl();

  // Called on the UI thread after object creation and before any other object
  // methods are executed on the UI thread.
  void Initialize(CefBrowserContext::Getter browser_context_getter,
                  CefRefPtr<CefCompletionCallback> callback);

  // CefCookieManager methods.
  void SetSupportedSchemes(const std::vector<CefString>& schemes,
                           bool include_defaults,
                           CefRefPtr<CefCompletionCallback> callback) override;
  bool VisitAllCookies(CefRefPtr<CefCookieVisitor> visitor) override;
  bool VisitUrlCookies(const CefString& url,
                       bool includeHttpOnly,
                       CefRefPtr<CefCookieVisitor> visitor) override;
  bool SetCookie(const CefString& url,
                 const CefCookie& cookie,
                 CefRefPtr<CefSetCookieCallback> callback) override;
  bool DeleteCookies(const CefString& url,
                     const CefString& cookie_name,
                     CefRefPtr<CefDeleteCookiesCallback> callback) override;
  bool FlushStore(CefRefPtr<CefCompletionCallback> callback) override;

  using CookieableSchemes = base::Optional<std::vector<std::string>>;
  static CookieableSchemes GetGlobalCookieableSchemes();

 private:
  // Only accessed on the UI thread. Will be non-null after Initialize().
  CefBrowserContext::Getter browser_context_getter_;

  IMPLEMENT_REFCOUNTING(CefCookieManagerImpl);
  DISALLOW_COPY_AND_ASSIGN(CefCookieManagerImpl);
};

#endif  // CEF_LIBCEF_BROWSER_NET_SERVICE_COOKIE_MANAGER_IMPL_H_
