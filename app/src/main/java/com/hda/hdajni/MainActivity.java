package com.hda.hdajni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

import com.hda.hdajni.ndk.hdaJniApi;
public class MainActivity extends AppCompatActivity {
    private String TAG = "hda-jni";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Log.d(TAG,"hdaJniAPi level:"+hdaJniApi.getLibVersion());
        Log.d(TAG,"hdaJniAPi get file create time:"+hdaJniApi.getFileLastModifyTime("/sdcard/test"));
    }
}
