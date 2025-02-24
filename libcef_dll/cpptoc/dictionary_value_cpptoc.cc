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
// $hash=3e9334efe52aaa876470421341bbd8ca2936f19e$
//

#include "libcef_dll/cpptoc/dictionary_value_cpptoc.h"
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/list_value_cpptoc.h"
#include "libcef_dll/cpptoc/value_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_dictionary_value_t* cef_dictionary_value_create() {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefDictionaryValue> _retval = CefDictionaryValue::Create();

  // Return type: refptr_same
  return CefDictionaryValueCppToC::Wrap(_retval);
}

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK
dictionary_value_is_valid(struct _cef_dictionary_value_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_is_owned(struct _cef_dictionary_value_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->IsOwned();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_is_read_only(struct _cef_dictionary_value_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->IsReadOnly();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_is_same(struct _cef_dictionary_value_t* self,
                         struct _cef_dictionary_value_t* that) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->IsSame(
      CefDictionaryValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_is_equal(struct _cef_dictionary_value_t* self,
                          struct _cef_dictionary_value_t* that) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->IsEqual(
      CefDictionaryValueCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

struct _cef_dictionary_value_t* CEF_CALLBACK
dictionary_value_copy(struct _cef_dictionary_value_t* self,
                      int exclude_empty_children) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefDictionaryValue> _retval =
      CefDictionaryValueCppToC::Get(self)->Copy(exclude_empty_children ? true
                                                                       : false);

  // Return type: refptr_same
  return CefDictionaryValueCppToC::Wrap(_retval);
}

size_t CEF_CALLBACK
dictionary_value_get_size(struct _cef_dictionary_value_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  size_t _retval = CefDictionaryValueCppToC::Get(self)->GetSize();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK dictionary_value_clear(struct _cef_dictionary_value_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->Clear();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_has_key(struct _cef_dictionary_value_t* self,
                                          const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->HasKey(CefString(key));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_get_keys(struct _cef_dictionary_value_t* self,
                                           cef_string_list_t keys) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: keys; type: string_vec_byref
  DCHECK(keys);
  if (!keys) {
    return 0;
  }

  // Translate param: keys; type: string_vec_byref
  std::vector<CefString> keysList;
  transfer_string_list_contents(keys, keysList);

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->GetKeys(keysList);

  // Restore param: keys; type: string_vec_byref
  cef_string_list_clear(keys);
  transfer_string_list_contents(keysList, keys);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_remove(struct _cef_dictionary_value_t* self,
                                         const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->Remove(CefString(key));

  // Return type: bool
  return _retval;
}

cef_value_type_t CEF_CALLBACK
dictionary_value_get_type(struct _cef_dictionary_value_t* self,
                          const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return VTYPE_INVALID;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return VTYPE_INVALID;
  }

  // Execute
  cef_value_type_t _retval =
      CefDictionaryValueCppToC::Get(self)->GetType(CefString(key));

  // Return type: simple
  return _retval;
}

cef_value_t* CEF_CALLBACK
dictionary_value_get_value(struct _cef_dictionary_value_t* self,
                           const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefValue> _retval =
      CefDictionaryValueCppToC::Get(self)->GetValue(CefString(key));

  // Return type: refptr_same
  return CefValueCppToC::Wrap(_retval);
}

int CEF_CALLBACK dictionary_value_get_bool(struct _cef_dictionary_value_t* self,
                                           const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->GetBool(CefString(key));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_get_int(struct _cef_dictionary_value_t* self,
                                          const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  int _retval = CefDictionaryValueCppToC::Get(self)->GetInt(CefString(key));

  // Return type: simple
  return _retval;
}

double CEF_CALLBACK
dictionary_value_get_double(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  double _retval =
      CefDictionaryValueCppToC::Get(self)->GetDouble(CefString(key));

  // Return type: simple
  return _retval;
}

cef_string_userfree_t CEF_CALLBACK
dictionary_value_get_string(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return NULL;
  }

  // Execute
  CefString _retval =
      CefDictionaryValueCppToC::Get(self)->GetString(CefString(key));

  // Return type: string
  return _retval.DetachToUserFree();
}

cef_binary_value_t* CEF_CALLBACK
dictionary_value_get_binary(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefBinaryValue> _retval =
      CefDictionaryValueCppToC::Get(self)->GetBinary(CefString(key));

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

struct _cef_dictionary_value_t* CEF_CALLBACK
dictionary_value_get_dictionary(struct _cef_dictionary_value_t* self,
                                const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefDictionaryValue> _retval =
      CefDictionaryValueCppToC::Get(self)->GetDictionary(CefString(key));

  // Return type: refptr_same
  return CefDictionaryValueCppToC::Wrap(_retval);
}

struct _cef_list_value_t* CEF_CALLBACK
dictionary_value_get_list(struct _cef_dictionary_value_t* self,
                          const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return NULL;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return NULL;
  }

  // Execute
  CefRefPtr<CefListValue> _retval =
      CefDictionaryValueCppToC::Get(self)->GetList(CefString(key));

  // Return type: refptr_same
  return CefListValueCppToC::Wrap(_retval);
}

int CEF_CALLBACK
dictionary_value_set_value(struct _cef_dictionary_value_t* self,
                           const cef_string_t* key,
                           cef_value_t* value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetValue(
      CefString(key), CefValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_set_null(struct _cef_dictionary_value_t* self,
                                           const cef_string_t* key) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetNull(CefString(key));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_set_bool(struct _cef_dictionary_value_t* self,
                                           const cef_string_t* key,
                                           int value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetBool(
      CefString(key), value ? true : false);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_set_int(struct _cef_dictionary_value_t* self,
                                          const cef_string_t* key,
                                          int value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval =
      CefDictionaryValueCppToC::Get(self)->SetInt(CefString(key), value);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_set_double(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key,
                            double value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }

  // Execute
  bool _retval =
      CefDictionaryValueCppToC::Get(self)->SetDouble(CefString(key), value);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_set_string(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key,
                            const cef_string_t* value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }
  // Unverified params: value

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetString(
      CefString(key), CefString(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_set_binary(struct _cef_dictionary_value_t* self,
                            const cef_string_t* key,
                            cef_binary_value_t* value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetBinary(
      CefString(key), CefBinaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK
dictionary_value_set_dictionary(struct _cef_dictionary_value_t* self,
                                const cef_string_t* key,
                                struct _cef_dictionary_value_t* value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetDictionary(
      CefString(key), CefDictionaryValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK dictionary_value_set_list(struct _cef_dictionary_value_t* self,
                                           const cef_string_t* key,
                                           struct _cef_list_value_t* value) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return 0;
  }
  // Verify param: key; type: string_byref_const
  DCHECK(key);
  if (!key) {
    return 0;
  }
  // Verify param: value; type: refptr_same
  DCHECK(value);
  if (!value) {
    return 0;
  }

  // Execute
  bool _retval = CefDictionaryValueCppToC::Get(self)->SetList(
      CefString(key), CefListValueCppToC::Unwrap(value));

  // Return type: bool
  return _retval;
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefDictionaryValueCppToC::CefDictionaryValueCppToC() {
  GetStruct()->is_valid = dictionary_value_is_valid;
  GetStruct()->is_owned = dictionary_value_is_owned;
  GetStruct()->is_read_only = dictionary_value_is_read_only;
  GetStruct()->is_same = dictionary_value_is_same;
  GetStruct()->is_equal = dictionary_value_is_equal;
  GetStruct()->copy = dictionary_value_copy;
  GetStruct()->get_size = dictionary_value_get_size;
  GetStruct()->clear = dictionary_value_clear;
  GetStruct()->has_key = dictionary_value_has_key;
  GetStruct()->get_keys = dictionary_value_get_keys;
  GetStruct()->remove = dictionary_value_remove;
  GetStruct()->get_type = dictionary_value_get_type;
  GetStruct()->get_value = dictionary_value_get_value;
  GetStruct()->get_bool = dictionary_value_get_bool;
  GetStruct()->get_int = dictionary_value_get_int;
  GetStruct()->get_double = dictionary_value_get_double;
  GetStruct()->get_string = dictionary_value_get_string;
  GetStruct()->get_binary = dictionary_value_get_binary;
  GetStruct()->get_dictionary = dictionary_value_get_dictionary;
  GetStruct()->get_list = dictionary_value_get_list;
  GetStruct()->set_value = dictionary_value_set_value;
  GetStruct()->set_null = dictionary_value_set_null;
  GetStruct()->set_bool = dictionary_value_set_bool;
  GetStruct()->set_int = dictionary_value_set_int;
  GetStruct()->set_double = dictionary_value_set_double;
  GetStruct()->set_string = dictionary_value_set_string;
  GetStruct()->set_binary = dictionary_value_set_binary;
  GetStruct()->set_dictionary = dictionary_value_set_dictionary;
  GetStruct()->set_list = dictionary_value_set_list;
}

// DESTRUCTOR - Do not edit by hand.

CefDictionaryValueCppToC::~CefDictionaryValueCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefDictionaryValue> CefCppToCRefCounted<
    CefDictionaryValueCppToC,
    CefDictionaryValue,
    cef_dictionary_value_t>::UnwrapDerived(CefWrapperType type,
                                           cef_dictionary_value_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefDictionaryValueCppToC,
                                   CefDictionaryValue,
                                   cef_dictionary_value_t>::kWrapperType =
    WT_DICTIONARY_VALUE;
