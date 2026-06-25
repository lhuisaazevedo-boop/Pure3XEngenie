#include "AudioManager.h"

#include <iostream>

namespace Pure3X {

AudioManager::AudioManager()
    : m_initialized(false)
{
}

bool AudioManager::Initialize()
{
    std::cout << "[Audio] Inicializando Audio Framework..." << std::endl;

    m_initialized = true;

    return true;
}

void AudioManager::Shutdown()
{
    std::cout << "[Audio] Encerrando Audio Framework..." << std::endl;

    m_initialized = false;
}

void AudioManager::Play()
{
    if (!m_initialized)
        return;

    std::cout << "[Audio] Reprodução iniciada." << std::endl;

    // Futuramente:
    // - Emular o áudio do PS3.
    // - Integrar com as SPUs.
    // - Processar buffers de áudio.
    // - Suportar múltiplos canais.
}

void AudioManager::Stop()
{
    if (!m_initialized)
        return;

    std::cout << "[Audio] Reprodução encerrada." << std::endl;
}

bool AudioManager::IsReady() const
{
    return m_initialized;
}

} // namespace Pure3X
