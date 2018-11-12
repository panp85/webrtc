// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/MultiprocessTestClientLauncher

#ifndef org_chromium_base_MultiprocessTestClientLauncher_JNI
#define org_chromium_base_MultiprocessTestClientLauncher_JNI

#include <jni.h>

#include "../../../../../../../../base/android/jni_generator/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char
    kClassPath_org_chromium_base_MultiprocessTestClientLauncher[];
const char kClassPath_org_chromium_base_MultiprocessTestClientLauncher[] =
    "org/chromium/base/MultiprocessTestClientLauncher";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord
    g_org_chromium_base_MultiprocessTestClientLauncher_clazz = 0;
#ifndef org_chromium_base_MultiprocessTestClientLauncher_clazz_defined
#define org_chromium_base_MultiprocessTestClientLauncher_clazz_defined
inline jclass org_chromium_base_MultiprocessTestClientLauncher_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env,
      kClassPath_org_chromium_base_MultiprocessTestClientLauncher,
      &g_org_chromium_base_MultiprocessTestClientLauncher_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace base {
namespace android {


static base::subtle::AtomicWord g_org_chromium_base_MultiprocessTestClientLauncher_launchClient = 0;
static jint Java_MultiprocessTestClientLauncher_launchClient(JNIEnv* env, const
    base::android::JavaRef<jobjectArray>& commandLine,
    const base::android::JavaRef<jobjectArray>& filesToMap) {
  CHECK_CLAZZ(env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
      org_chromium_base_MultiprocessTestClientLauncher_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          "launchClient",
          "([Ljava/lang/String;[Lorg/chromium/base/process_launcher/FileDescriptorInfo;)I",
          &g_org_chromium_base_MultiprocessTestClientLauncher_launchClient);

  jint ret =
      env->CallStaticIntMethod(org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          method_id, commandLine.obj(), filesToMap.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_org_chromium_base_MultiprocessTestClientLauncher_waitForMainToReturn = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_MultiprocessTestClientLauncher_waitForMainToReturn(JNIEnv* env, JniIntWrapper pid,
    JniIntWrapper timeoutMs) {
  CHECK_CLAZZ(env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
      org_chromium_base_MultiprocessTestClientLauncher_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          "waitForMainToReturn",
          "(II)Lorg/chromium/base/MainReturnCodeResult;",
          &g_org_chromium_base_MultiprocessTestClientLauncher_waitForMainToReturn);

  jobject ret =
      env->CallStaticObjectMethod(org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          method_id, as_jint(pid), as_jint(timeoutMs));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_org_chromium_base_MultiprocessTestClientLauncher_terminate = 0;
static jboolean Java_MultiprocessTestClientLauncher_terminate(JNIEnv* env, JniIntWrapper pid,
    JniIntWrapper exitCode,
    jboolean wait) {
  CHECK_CLAZZ(env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
      org_chromium_base_MultiprocessTestClientLauncher_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          "terminate",
          "(IIZ)Z",
          &g_org_chromium_base_MultiprocessTestClientLauncher_terminate);

  jboolean ret =
      env->CallStaticBooleanMethod(org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          method_id, as_jint(pid), as_jint(exitCode), wait);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_org_chromium_base_MultiprocessTestClientLauncher_makeFdInfoArray =
    0;
static base::android::ScopedJavaLocalRef<jobjectArray>
    Java_MultiprocessTestClientLauncher_makeFdInfoArray(JNIEnv* env, const
    base::android::JavaRef<jintArray>& keys,
    const base::android::JavaRef<jintArray>& fds) {
  CHECK_CLAZZ(env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
      org_chromium_base_MultiprocessTestClientLauncher_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
          env, org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          "makeFdInfoArray",
          "([I[I)[Lorg/chromium/base/process_launcher/FileDescriptorInfo;",
          &g_org_chromium_base_MultiprocessTestClientLauncher_makeFdInfoArray);

  jobjectArray ret =
static_cast<jobjectArray>(env->CallStaticObjectMethod(org_chromium_base_MultiprocessTestClientLauncher_clazz(env),
          method_id, keys.obj(), fds.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_base_MultiprocessTestClientLauncher_JNI