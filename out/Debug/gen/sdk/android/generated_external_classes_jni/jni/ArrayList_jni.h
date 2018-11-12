// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     java/util/ArrayList

#ifndef java_util_ArrayList_JNI
#define java_util_ArrayList_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_java_util_ArrayList[];
const char kClassPath_java_util_ArrayList[] = "java/util/ArrayList";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT base::subtle::AtomicWord g_java_util_ArrayList_clazz = 0;
#ifndef java_util_ArrayList_clazz_defined
#define java_util_ArrayList_clazz_defined
inline jclass java_util_ArrayList_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_java_util_ArrayList,
      &g_java_util_ArrayList_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace JNI_ArrayList {


static base::subtle::AtomicWord g_java_util_ArrayList_trimToSize = 0;
static void Java_ArrayList_trimToSize(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    __attribute__ ((unused));
static void Java_ArrayList_trimToSize(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "trimToSize",
          "()V",
          &g_java_util_ArrayList_trimToSize);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_ensureCapacity = 0;
static void Java_ArrayList_ensureCapacity(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0) __attribute__ ((unused));
static void Java_ArrayList_ensureCapacity(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "ensureCapacity",
          "(I)V",
          &g_java_util_ArrayList_ensureCapacity);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_size = 0;
static jint Java_ArrayList_size(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    __attribute__ ((unused));
static jint Java_ArrayList_size(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "size",
          "()I",
          &g_java_util_ArrayList_size);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_isEmpty = 0;
static jboolean Java_ArrayList_isEmpty(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    __attribute__ ((unused));
static jboolean Java_ArrayList_isEmpty(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "isEmpty",
          "()Z",
          &g_java_util_ArrayList_isEmpty);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_contains = 0;
static jboolean Java_ArrayList_contains(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_contains(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "contains",
          "(Ljava/lang/Object;)Z",
          &g_java_util_ArrayList_contains);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_indexOf = 0;
static jint Java_ArrayList_indexOf(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jint Java_ArrayList_indexOf(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "indexOf",
          "(Ljava/lang/Object;)I",
          &g_java_util_ArrayList_indexOf);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_lastIndexOf = 0;
static jint Java_ArrayList_lastIndexOf(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jint Java_ArrayList_lastIndexOf(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), 0);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "lastIndexOf",
          "(Ljava/lang/Object;)I",
          &g_java_util_ArrayList_lastIndexOf);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_clone = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_clone(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_clone(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "clone",
          "()Ljava/lang/Object;",
          &g_java_util_ArrayList_clone);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_toArrayLJLO = 0;
static base::android::ScopedJavaLocalRef<jobjectArray> Java_ArrayList_toArrayLJLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobjectArray> Java_ArrayList_toArrayLJLO(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "toArray",
          "()[Ljava/lang/Object;",
          &g_java_util_ArrayList_toArrayLJLO);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_toArrayLJUT_LJUT = 0;
static base::android::ScopedJavaLocalRef<jobjectArray> Java_ArrayList_toArrayLJUT_LJUT(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobjectArray>& p0)
    __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobjectArray> Java_ArrayList_toArrayLJUT_LJUT(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, const base::android::JavaRef<jobjectArray>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "toArray",
          "([Ljava/lang/Object;)[Ljava/lang/Object;",
          &g_java_util_ArrayList_toArrayLJUT_LJUT);

  jobjectArray ret =
      static_cast<jobjectArray>(env->CallObjectMethod(obj.obj(),
          method_id, p0.obj()));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_get = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_get(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_get(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "get",
          "(I)Ljava/lang/Object;",
          &g_java_util_ArrayList_get);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_set = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_set(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_set(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "set",
          "(ILjava/lang/Object;)Ljava/lang/Object;",
          &g_java_util_ArrayList_set);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(p0), p1.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_addZ_JUE = 0;
static jboolean Java_ArrayList_addZ_JUE(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_addZ_JUE(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "add",
          "(Ljava/lang/Object;)Z",
          &g_java_util_ArrayList_addZ_JUE);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_addV_I_JUE = 0;
static void Java_ArrayList_addV_I_JUE(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static void Java_ArrayList_addV_I_JUE(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "add",
          "(ILjava/lang/Object;)V",
          &g_java_util_ArrayList_addV_I_JUE);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(p0), p1.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_removeJUE_I = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_removeJUE_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_removeJUE_I(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "remove",
          "(I)Ljava/lang/Object;",
          &g_java_util_ArrayList_removeJUE_I);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_removeZ_JLO = 0;
static jboolean Java_ArrayList_removeZ_JLO(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_removeZ_JLO(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "remove",
          "(Ljava/lang/Object;)Z",
          &g_java_util_ArrayList_removeZ_JLO);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_clear = 0;
static void Java_ArrayList_clear(JNIEnv* env, const base::android::JavaRef<jobject>& obj)
    __attribute__ ((unused));
static void Java_ArrayList_clear(JNIEnv* env, const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "clear",
          "()V",
          &g_java_util_ArrayList_clear);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_addAllZ_JUC = 0;
static jboolean Java_ArrayList_addAllZ_JUC(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_addAllZ_JUC(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "addAll",
          "(Ljava/util/Collection;)Z",
          &g_java_util_ArrayList_addAllZ_JUC);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_addAllZ_I_JUC = 0;
static jboolean Java_ArrayList_addAllZ_I_JUC(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) __attribute__ ((unused));
static jboolean Java_ArrayList_addAllZ_I_JUC(JNIEnv* env, const base::android::JavaRef<jobject>&
    obj, JniIntWrapper p0,
    const base::android::JavaRef<jobject>& p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "addAll",
          "(ILjava/util/Collection;)Z",
          &g_java_util_ArrayList_addAllZ_I_JUC);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, as_jint(p0), p1.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_removeRange = 0;
static void Java_ArrayList_removeRange(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0,
    JniIntWrapper p1) __attribute__ ((unused));
static void Java_ArrayList_removeRange(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    JniIntWrapper p0,
    JniIntWrapper p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "removeRange",
          "(II)V",
          &g_java_util_ArrayList_removeRange);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(p0), as_jint(p1));
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_removeAll = 0;
static jboolean Java_ArrayList_removeAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_removeAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "removeAll",
          "(Ljava/util/Collection;)Z",
          &g_java_util_ArrayList_removeAll);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_retainAll = 0;
static jboolean Java_ArrayList_retainAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_retainAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "retainAll",
          "(Ljava/util/Collection;)Z",
          &g_java_util_ArrayList_retainAll);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_listIteratorJULII_I = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_listIteratorJULII_I(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, JniIntWrapper p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_listIteratorJULII_I(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj, JniIntWrapper p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "listIterator",
          "(I)Ljava/util/ListIterator;",
          &g_java_util_ArrayList_listIteratorJULII_I);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_listIteratorJULII = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_listIteratorJULII(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_listIteratorJULII(JNIEnv* env,
    const base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "listIterator",
          "()Ljava/util/ListIterator;",
          &g_java_util_ArrayList_listIteratorJULII);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_iterator = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_iterator(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_iterator(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "iterator",
          "()Ljava/util/Iterator;",
          &g_java_util_ArrayList_iterator);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_subList = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_subList(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0,
    JniIntWrapper p1) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_subList(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj, JniIntWrapper p0,
    JniIntWrapper p1) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "subList",
          "(II)Ljava/util/List;",
          &g_java_util_ArrayList_subList);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id, as_jint(p0), as_jint(p1));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_forEach = 0;
static void Java_ArrayList_forEach(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static void Java_ArrayList_forEach(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "forEach",
          "(Ljava/util/function/Consumer;)V",
          &g_java_util_ArrayList_forEach);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_spliterator = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_spliterator(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_spliterator(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "spliterator",
          "()Ljava/util/Spliterator;",
          &g_java_util_ArrayList_spliterator);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_removeIf = 0;
static jboolean Java_ArrayList_removeIf(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static jboolean Java_ArrayList_removeIf(JNIEnv* env, const base::android::JavaRef<jobject>& obj,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env), false);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "removeIf",
          "(Ljava/util/function/Predicate;)Z",
          &g_java_util_ArrayList_removeIf);

  jboolean ret =
      env->CallBooleanMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_java_util_ArrayList_replaceAll = 0;
static void Java_ArrayList_replaceAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static void Java_ArrayList_replaceAll(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "replaceAll",
          "(Ljava/util/function/UnaryOperator;)V",
          &g_java_util_ArrayList_replaceAll);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_sort = 0;
static void Java_ArrayList_sort(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static void Java_ArrayList_sort(JNIEnv* env, const base::android::JavaRef<jobject>& obj, const
    base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, obj.obj(),
      java_util_ArrayList_clazz(env));
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "sort",
          "(Ljava/util/Comparator;)V",
          &g_java_util_ArrayList_sort);

     env->CallVoidMethod(obj.obj(),
          method_id, p0.obj());
  jni_generator::CheckException(env);
}

static base::subtle::AtomicWord g_java_util_ArrayList_ConstructorJUALI_I = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI_I(JNIEnv* env,
    JniIntWrapper p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI_I(JNIEnv* env,
    JniIntWrapper p0) {
  CHECK_CLAZZ(env, java_util_ArrayList_clazz(env),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "<init>",
          "(I)V",
          &g_java_util_ArrayList_ConstructorJUALI_I);

  jobject ret =
      env->NewObject(java_util_ArrayList_clazz(env),
          method_id, as_jint(p0));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_ConstructorJUALI = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI(JNIEnv* env)
    __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI(JNIEnv* env) {
  CHECK_CLAZZ(env, java_util_ArrayList_clazz(env),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "<init>",
          "()V",
          &g_java_util_ArrayList_ConstructorJUALI);

  jobject ret =
      env->NewObject(java_util_ArrayList_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_java_util_ArrayList_ConstructorJUALI_JUC = 0;
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI_JUC(JNIEnv* env,
    const base::android::JavaRef<jobject>& p0) __attribute__ ((unused));
static base::android::ScopedJavaLocalRef<jobject> Java_ArrayList_ConstructorJUALI_JUC(JNIEnv* env,
    const base::android::JavaRef<jobject>& p0) {
  CHECK_CLAZZ(env, java_util_ArrayList_clazz(env),
      java_util_ArrayList_clazz(env), NULL);
  jmethodID method_id = base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
          env, java_util_ArrayList_clazz(env),
          "<init>",
          "(Ljava/util/Collection;)V",
          &g_java_util_ArrayList_ConstructorJUALI_JUC);

  jobject ret =
      env->NewObject(java_util_ArrayList_clazz(env),
          method_id, p0.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace JNI_ArrayList

#endif  // java_util_ArrayList_JNI