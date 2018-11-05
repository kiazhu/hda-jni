//
// Created by zkh on 18-11-5.
//
#include <sys/stat.h>
#include <time.h>

#include "com_hda_hdajni_ndk_hdaJniApi.h"

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

    return (*env)->NewStringUTF(env, buf);
}