#include <jni.h>
#include <android/log.h>

#define LOG_TAG "Pure3XEngenie"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

extern "C"
JNIEXPORT void JNICALL
Java_com_pure3x_engenie_MainActivity_initEngine(
        JNIEnv* env,
        jobject thiz) {

    LOGI("Pure3XEngenie inicializada com sucesso!");
}
