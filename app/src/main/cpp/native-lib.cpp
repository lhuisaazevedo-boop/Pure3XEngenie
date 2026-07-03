#include <jni.h>
#include <android/log.h>

#define TAG "Pure3XEngenie"

extern "C" {

// Chamado automaticamente quando a biblioteca é carregada
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Pure3XEngenie v0.2.3 Alpha carregada!"
    );

    return JNI_VERSION_1_6;
}

// Chamado pela MainActivity
JNIEXPORT void JNICALL
Java_com_pure3x_engenie_MainActivity_initEngine(
        JNIEnv* env,
        jobject thiz) {

    __android_log_print(
        ANDROID_LOG_INFO,
        TAG,
        "Inicializando Engine..."
    );

    // Futuramente:
    // Engine::Get().Initialize();
}

}
