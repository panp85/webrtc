// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/JavaVideoSourceTestHelper

#ifndef org_webrtc_JavaVideoSourceTestHelper_JNI
#define org_webrtc_JavaVideoSourceTestHelper_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_JavaVideoSourceTestHelper[];
const char kClassPath_org_webrtc_JavaVideoSourceTestHelper[] =
    "org/webrtc/JavaVideoSourceTestHelper";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_org_webrtc_JavaVideoSourceTestHelper_clazz = 0;
#ifndef org_webrtc_JavaVideoSourceTestHelper_clazz_defined
#define org_webrtc_JavaVideoSourceTestHelper_clazz_defined
inline jclass org_webrtc_JavaVideoSourceTestHelper_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_JavaVideoSourceTestHelper,
      &g_org_webrtc_JavaVideoSourceTestHelper_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static base::subtle::AtomicWord g_org_webrtc_JavaVideoSourceTestHelper_startCapture = 0;
static void Java_JavaVideoSourceTestHelper_startCapture(JNIEnv* env, const
    base::android::JavaRef<jobject>& observer,
    jboolean success) {
  CHECK_CLAZZ(env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
      org_webrtc_JavaVideoSourceTestHelper_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          "startCapture",
          "(Lorg/webrtc/VideoCapturer$CapturerObserver;Z)V",
          &g_org_webrtc_JavaVideoSourceTestHelper_startCapture);

     env->CallStaticVoidMethod(org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          method_id, observer.obj(), success);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_webrtc_JavaVideoSourceTestHelper_stopCapture = 0;
static void Java_JavaVideoSourceTestHelper_stopCapture(JNIEnv* env, const
    base::android::JavaRef<jobject>& observer) {
  CHECK_CLAZZ(env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
      org_webrtc_JavaVideoSourceTestHelper_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          "stopCapture",
          "(Lorg/webrtc/VideoCapturer$CapturerObserver;)V",
          &g_org_webrtc_JavaVideoSourceTestHelper_stopCapture);

     env->CallStaticVoidMethod(org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          method_id, observer.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_org_webrtc_JavaVideoSourceTestHelper_deliverFrame = 0;
static void Java_JavaVideoSourceTestHelper_deliverFrame(JNIEnv* env, const
    base::android::JavaRef<jobject>& observer) {
  CHECK_CLAZZ(env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
      org_webrtc_JavaVideoSourceTestHelper_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          "deliverFrame",
          "(Lorg/webrtc/VideoCapturer$CapturerObserver;)V",
          &g_org_webrtc_JavaVideoSourceTestHelper_deliverFrame);

     env->CallStaticVoidMethod(org_webrtc_JavaVideoSourceTestHelper_clazz(env),
          method_id, observer.obj());
  jni_generator::CheckException(env);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_JavaVideoSourceTestHelper_JNI