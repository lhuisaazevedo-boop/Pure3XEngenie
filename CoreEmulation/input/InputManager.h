#pragma once

#include <android/log.h>

#define PX3E_LOG_TAG "Pure3X_Input"

#define PX3E_LOGI(...) __android_log_print(ANDROID_LOG_INFO,  PX3E_LOG_TAG, __VA_ARGS__)
#define PX3E_LOGW(...) __android_log_print(ANDROID_LOG_WARN,  PX3E_LOG_TAG, __VA_ARGS__)
#define PX3E_LOGE(...) __android_log_print(ANDROID_LOG_ERROR, PX3E_LOG_TAG, __VA_ARGS__)

namespace Pure3X
{

class InputManager
{
private:
    inline static bool m_initialized = false;

public:
    InputManager() = default;
    ~InputManager() = default;

    InputManager(const InputManager&) = delete;
    InputManager& operator=(const InputManager&) = delete;

    static bool Initialize();
    static void Update();
    static void Shutdown();

    [[nodiscard]]
    static bool IsInitialized() noexcept
    {
        return m_initialized;
    }
};

} // namespace Pure3X
