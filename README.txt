HOW TO USE NDK
   STEP1. Create Android normal project
   STEP2. Create jdk directory and create jni native function
   STEP3. Enter src/main/java/ directory,and exe
           javah -d ../jni com.hda.hdajni.hdaJniApi
   STEP4. Modify build.gredle, defaultConfig add
                ndk{
                    moduleName "hda-jni"
                    ldLibs "log"
                }
   STEP5. Modify gradle.properties, add
           android.deprecatedNdkCompileLease=1541214831375
   STEP6. Add com_hda_hdajni_hdaJniApi.c file,and implement func
   STEP7. Build.

Ndk build in command line
   1.cp app/build/intermediates/ndk/debug/Android.mk app/src/main/jni/
   2.Enter ndk location,and execute ./ndk-build
