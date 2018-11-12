// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/MainReturnCodeResult

#ifndef org_chromium_base_MainReturnCodeResult_JNI
#define org_chromium_base_MainReturnCodeResult_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_chromium_base_MainReturnCodeResult[];
const char kClassPath_org_chromium_base_MainReturnCodeResult[] =
    "org/chromium/base/MainReturnCodeResult";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_chromium_base_MainReturnCodeResult_clazz = 0;
#ifndef org_chromium_base_MainReturnCodeResult_clazz_defined
#define org_chromium_base_MainReturnCodeResult_clazz_defined
inline jclass org_chromium_base_MainReturnCodeResult_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_chromium_base_MainReturnCodeResult,
      &g_org_chromium_base_MainReturnCodeResult_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {


static base::subtle::AtomicWord g_org_chromium_base_MainReturnCodeResult_getReturnCode = 0;
static jint Java_MainReturnCodeResult_getReturnCode(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_MainReturnCodeResult_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_base_MainReturnCodeResult_clazz(env),
          "getReturnCode",
          "()I",
          &g_org_chromium_base_MainReturnCodeResult_getReturnCode);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_base_MainReturnCodeResult_hasTimedOut = 0;
static jboolean Java_MainReturnCodeResult_hasTimedOut(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      org_chromium_base_MainReturnCodeResult_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, org_chromium_base_MainReturnCodeResult_clazz(env),
          "hasTimedOut",
          "()Z",
          &g_org_chromium_base_MainReturnCodeResult_hasTimedOut);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_MainReturnCodeResult_JNI