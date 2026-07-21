#include "InputManager.h"

namespace Pure3X
{

bool InputManager::Initialize()
{
    if (m_initialized)
    {
        PX3E_LOGW("Input Manager ja esta inicializado");
        return true;
    }

    PX3E_LOGI("Inicializando Input Manager...");

    // TODO: Implementar inicialização real
    // - AInputQueue_attachCallback (JNI)
    // - Mapeamento de gamepads Bluetooth
    // - Configuração de touchscreen

    m_initialized = true;

    PX3E_LOGI("Input Manager pronto");
    return true;
}

void InputManager::Update()
{
    if (!m_initialized)
    {
        return;
    }

    // Futuramente:
    // - Processar fila de eventos AInputQueue
    // - Atualizar estado de DualShock/DualSense
    // - Polling de teclado/mouse via JNI
    // - Gestos de touchscreen
}

void InputManager::Shutdown()
{
    if (!m_initialized)
    {
        PX3E_LOGW("Shutdown chamado sem inicializacao previa");
        return;
    }

    PX3E_LOGI("Encerrando Input Manager...");

    // TODO: Liberar recursos
    // - AInputQueue_detachCallback
    // - Fechar conexões Bluetooth
    // - Limpar buffers de input

    m_initialized = false;

    PX3E_LOGI("Input Manager encerrado");
}

} // namespace Pure3X
