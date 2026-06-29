#ifndef PURE3X_ANDROID_BRIDGE_H
#define PURE3X_ANDROID_BRIDGE_H

namespace Pure3X
{

class AndroidBridge
{
public:
    static bool Initialize();
    static void Shutdown();

    static void AttachWindow(void* windowHandle);
    static void DetachWindow();

    static bool IsReady();

private:
    static bool ready;
};

} // namespace Pure3X

#endif // PURE3X_ANDROID_BRIDGE_H
