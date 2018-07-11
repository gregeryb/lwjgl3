/*
 * Copyright LWJGL. All rights reserved.
 * License terms: https://www.lwjgl.org/license
 * MACHINE GENERATED FILE, DO NOT EDIT
 */
#include "common_tools.h"
#include "opengl.h"

typedef void (APIENTRY *glCompressedTexImage3DARBPROC) (jint, jint, jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glCompressedTexImage2DARBPROC) (jint, jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glCompressedTexImage1DARBPROC) (jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glCompressedTexSubImage3DARBPROC) (jint, jint, jint, jint, jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glCompressedTexSubImage2DARBPROC) (jint, jint, jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glCompressedTexSubImage1DARBPROC) (jint, jint, jint, jint, jint, jint, const intptr_t);
typedef void (APIENTRY *glGetCompressedTexImageARBPROC) (jint, jint, intptr_t);

EXTERN_C_ENTER

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage3DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint height, jint depth, jint border, jint imageSize, jlong dataAddress) {
    glCompressedTexImage3DARBPROC glCompressedTexImage3DARB = (glCompressedTexImage3DARBPROC)tlsGetFunction(208);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexImage3DARB(target, level, internalformat, width, height, depth, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage2DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint imageSize, jlong dataAddress) {
    glCompressedTexImage2DARBPROC glCompressedTexImage2DARB = (glCompressedTexImage2DARBPROC)tlsGetFunction(206);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexImage2DARB(target, level, internalformat, width, height, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexImage1DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint border, jint imageSize, jlong dataAddress) {
    glCompressedTexImage1DARBPROC glCompressedTexImage1DARB = (glCompressedTexImage1DARBPROC)tlsGetFunction(204);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexImage1DARB(target, level, internalformat, width, border, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage3DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint zoffset, jint width, jint height, jint depth, jint format, jint imageSize, jlong dataAddress) {
    glCompressedTexSubImage3DARBPROC glCompressedTexSubImage3DARB = (glCompressedTexSubImage3DARBPROC)tlsGetFunction(214);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage2DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint imageSize, jlong dataAddress) {
    glCompressedTexSubImage2DARBPROC glCompressedTexSubImage2DARB = (glCompressedTexSubImage2DARBPROC)tlsGetFunction(212);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglCompressedTexSubImage1DARB(JNIEnv *__env, jclass clazz, jint target, jint level, jint xoffset, jint width, jint format, jint imageSize, jlong dataAddress) {
    glCompressedTexSubImage1DARBPROC glCompressedTexSubImage1DARB = (glCompressedTexSubImage1DARBPROC)tlsGetFunction(210);
    const intptr_t data = (const intptr_t)dataAddress;
    UNUSED_PARAM(clazz)
    glCompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_ARBTextureCompression_nglGetCompressedTexImageARB(JNIEnv *__env, jclass clazz, jint target, jint level, jlong pixelsAddress) {
    glGetCompressedTexImageARBPROC glGetCompressedTexImageARB = (glGetCompressedTexImageARBPROC)tlsGetFunction(535);
    intptr_t pixels = (intptr_t)pixelsAddress;
    UNUSED_PARAM(clazz)
    glGetCompressedTexImageARB(target, level, pixels);
}

EXTERN_C_EXIT
