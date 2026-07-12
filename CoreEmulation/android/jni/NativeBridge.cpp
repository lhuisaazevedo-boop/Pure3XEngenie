#include <jni.h>
#include <android/native_window_jni.h>

#include "JNIBridge.h"

using namespace Pure3X;

extern "C"
{

JNIEXPORT void JNICALL
Java_lhuis_pure3xengine_MainActivity_nativeSetSurface(
        JNIEnv* env,
        jobject /* thiz */,
        jobject surface)
{
    ANativeWindow* window = ANativeWindow_fromSurface(env, surface);

    if (window != nullptr)
    {
        JNIBridge::SetNativeWindow(window);
    }
}

JNIEXPORT void JNICALL
Java_lhuis_pure3xengine_MainActivity_nativeReleaseSurface(
        JNIEnv*,
        jobject)
{
    JNIBridge::SetNativeWindow(nullptr);
}

}
