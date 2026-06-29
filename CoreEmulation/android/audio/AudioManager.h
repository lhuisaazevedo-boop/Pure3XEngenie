#ifndef PURE3X_AUDIO_MANAGER_H
#define PURE3X_AUDIO_MANAGER_H

namespace Pure3X
{

class AudioManager
{
public:
    static bool Initialize();

    static void Shutdown();

    static bool IsReady();

private:
    static bool ready;
};

}

#endif
