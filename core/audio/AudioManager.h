#ifndef PURE3X_AUDIO_MANAGER_H
#define PURE3X_AUDIO_MANAGER_H

namespace Pure3X {

class AudioManager {
public:
    AudioManager();

    bool Initialize();
    void Shutdown();

    void Play();
    void Stop();

    bool IsReady() const;

private:
    bool m_initialized;
};

} // namespace Pure3X

#endif
