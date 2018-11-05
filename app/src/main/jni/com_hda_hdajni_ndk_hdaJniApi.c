//
// Created by zkh on 18-11-5.
//
#include <sys/stat.h>
#include <time.h>
#include <android/log.h>

#include "com_hda_hdajni_ndk_hdaJniApi.h"

#define LOG    "hda-jni-c-code"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG,__VA_ARGS__)
#define LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG,__VA_ARGS__)

JNIEXPORT jstring JNICALL Java_com_hda_hdajni_ndk_hdaJniApi_getLibVersion
    (JNIEnv *env, jclass clz){
      return (*env)->NewStringUTF(env, "V1.2.0");
}

JNIEXPORT jstring JNICALL Java_com_hda_hdajni_ndk_hdaJniApi_getFileLastModifyTime
        (JNIEnv *env, jclass clz, jstring filename){
    const char *buf = (*env)->GetStringUTFChars(env,filename, 0);
    (*env)->ReleaseStringUTFChars(env,filename, buf);

    struct stat sb;
    stat(buf, &sb);

    struct tm* t=localtime(&sb.st_ctime);
    sprintf(buf, "%04d-%02d-%02d %02d:%02d:%02d",
    t->tm_year+1900, t->tm_mon+1, t->tm_mday,
    t->tm_hour, t->tm_min, t->tm_sec);
    LOGD("Get files time: %s\n",buf);

    return (*env)->NewStringUTF(env, buf);
}