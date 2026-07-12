#include <jni.h>

#include "../../Engine.h"

using namespace Pure3X;

extern "C"
{

JNIEXPORT jboolean JNICALL
Java_lhuis_pure3xengine_MainActivity_nativeInitialize(
        JNIEnv*,
        jobject)
{
    Engine engine;
    return engine.Initialize() ? JNI_TRUE : JNI_FALSE;
}

JNIEXPORT void JNICALL
Java_lhuis_pure3xengine_MainActivity_nativeShutdown(
        JNIEnv*,
        jobject)
{
    Engine engine;
    engine.Shutdown();
}

}
