LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := hda-jni
LOCAL_LDFLAGS := -Wl,--build-id
LOCAL_SRC_FILES := \
	/home/zkh/Downloads/hdajni/app/src/main/jni/Android.mk \
	/home/zkh/Downloads/hdajni/app/src/main/jni/com_hda_hdajni_ndk_hdaJniApi.c \

LOCAL_C_INCLUDES += /home/zkh/Downloads/hdajni/app/src/main/jni
LOCAL_C_INCLUDES += /home/zkh/Downloads/hdajni/app/src/debug/jni

include $(BUILD_SHARED_LIBRARY)
