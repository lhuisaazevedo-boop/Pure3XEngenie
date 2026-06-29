#include "AudioManager.h"

#include <iostream>

#include <pulse/simple.h>
#include <pulse/error.h>

namespace Pure3X
{

static pa_simple* pulseStream = nullptr;

bool AudioManager::ready = false;

bool AudioManager::Initialize()
{
    std::cout << "[Audio] Inicializando...\n";

    pa_sample_spec sampleSpec;
    sampleSpec.format = PA_SAMPLE_S16LE;
    sampleSpec.channels = 2;
    sampleSpec.rate = 44100;

    int error = 0;

    pulseStream = pa_simple_new(
        nullptr,
        "Pure3XEngenie",
        PA_STREAM_PLAYBACK,
        nullptr,
        "Pure3X Audio",
        &sampleSpec,
        nullptr,
        nullptr,
        &error);

    if (!pulseStream)
    {
        std::cerr << "[ERRO] PulseAudio: "
                  << pa_strerror(error)
                  << std::endl;

        ready = false;
        return false;
    }

    ready = true;

    std::cout << "[OK] Audio inicializado.\n";

    return true;
}

void AudioManager::Shutdown()
{
    std::cout << "[Audio] Encerrando...\n";

    if (pulseStream)
    {
        pa_simple_free(pulseStream);
        pulseStream = nullptr;
    }

    ready = false;

    std::cout << "[OK] Audio finalizado.\n";
}

bool AudioManager::IsReady()
{
    return ready;
}

} // namespace Pure3X
