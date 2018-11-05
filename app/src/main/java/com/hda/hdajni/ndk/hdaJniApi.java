package com.hda.hdajni.ndk;

public class hdaJniApi {
    /*  HOW TO USE NDK
    *   STEP1. Create Android normal project
    *   STEP2. Create jdk directory and create jni native function
    *   STEP3. Enter src/main/java/ directory,and exe
    *           javah -d ../jni com.hda.hdajni.hdaJniApi
    *   STEP4. Modify build.gredle, defaultConfig add
    *                ndk{
    *                    moduleName "hda-jni"
    *                    ldLibs "log"
    *                }
    *   STEP5. Modify gradle.properties, add
    *           android.deprecatedNdkCompileLease=1541214831375
    *   STEP6. Add com_hda_hdajni_hdaJniApi.c file,and implement func
    *   STEP7. Build.
    * */

    public static native String getLibVersion();

    static{
        System.loadLibrary("hda-jni");
    }
}
