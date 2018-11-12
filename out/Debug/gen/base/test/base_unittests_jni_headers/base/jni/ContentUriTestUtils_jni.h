// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/ContentUriTestUtils

#ifndef org_chromium_base_ContentUriTestUtils_JNI
#define org_chromium_base_ContentUriTestUtils_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_ContentUriTestUtils[];
const char kClassPath_org_chromium_base_ContentUriTestUtils[] =
    "org/chromium/base/ContentUriTestUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_base_ContentUriTestUtils_clazz = 0;
#ifndef org_chromium_base_ContentUriTestUtils_clazz_defined
#define org_chromium_base_ContentUriTestUtils_clazz_defined
inline jclass org_chromium_base_ContentUriTestUtils_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_ContentUriTestUtils,
      &g_org_chromium_base_ContentUriTestUtils_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.

static base::subtle::AtomicWord g_org_chromium_base_ContentUriTestUtils_insertImageIntoMediaStore =
    0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_ContentUriTestUtils_insertImageIntoMediaStore(JNIEnv* env, const
    base::android::JavaRef<jstring>& path) {
  CHECK_CLAZZ(env, org_chromium_base_ContentUriTestUtils_clazz(env),
      org_chromium_base_ContentUriTestUtils_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_ContentUriTestUtils_clazz(env),
          "insertImageIntoMediaStore",
          "(Ljava/lang/String;)Ljava/lang/String;",
          &g_org_chromium_base_ContentUriTestUtils_insertImageIntoMediaStore);

  jstring ret =
static_cast<jstring>(env->CallStaticObjectMethod(org_chromium_base_ContentUriTestUtils_clazz(env),
          method_id, path.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

#endif  // org_chromium_base_ContentUriTestUtils_JNI