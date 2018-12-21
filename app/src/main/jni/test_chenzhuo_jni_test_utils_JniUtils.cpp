//
// Created by Chen,Zhuo(BP&IT) on 2018/12/18.
//

#include "test_chenzhuo_jni_test_utils_JniUtils.h"

JNIEXPORT jstring JNICALL Java_test_chenzhuo_jni_1test_utils_JniUtils_getJniString
        (JNIEnv *env, jclass) {
    return env -> NewStringUTF("Jni Success");
}