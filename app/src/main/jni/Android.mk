LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := jni_sample
LOCAL_SRC_FILES := test_chenzhuo_jni_test_utils_JniUtils.cpp
include $(BUILD_SHARED_LIBRARY)