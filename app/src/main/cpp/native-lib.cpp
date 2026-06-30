#include <jni.h>
#include <android/log.h>

#define TAG "Pure3XEngenie"

extern "C"
JNIEXPORT void JNICALL
Java_com_pure3x_engenie_MainActivity_initEngine(
        JNIEnv* env,
        jobject thiz) {

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Pure3XEngenie v0.2.2 Alpha iniciada!"
    );
}
