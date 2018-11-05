//
// Created by zkh on 18-11-5.
//

#include "com_hda_hdajni_ndk_hdaJniApi.h"

JNIEXPORT jstring JNICALL Java_com_hda_hdajni_ndk_hdaJniApi_getLibVersion
    (JNIEnv *env, jclass clz){
      return (*env)->NewStringUTF(env, "V1.2.0");
 }