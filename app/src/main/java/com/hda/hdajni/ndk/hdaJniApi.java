package com.hda.hdajni.ndk;

public class hdaJniApi {

    public static native String getLibVersion();
    public static native String getFileLastModifyTime(String filename);

    static{
        System.loadLibrary("hda-jni");
    }
}
