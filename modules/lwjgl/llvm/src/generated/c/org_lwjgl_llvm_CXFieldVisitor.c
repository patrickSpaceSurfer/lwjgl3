/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "clang-c/Index.h"

static jint delegate(CXCursor C, CXClientData client_data) {
    return ((enum CXVisitorResult (*)(CXCursor *))(uintptr_t)client_data)(&C);
}

EXTERN_C_ENTER

JNIEXPORT jlong JNICALL Java_org_lwjgl_llvm_CXFieldVisitor_getDelegate(JNIEnv *env, jclass clazz) {
    UNUSED_PARAMS(env, clazz);
    return (intptr_t)delegate;
}

EXTERN_C_EXIT
