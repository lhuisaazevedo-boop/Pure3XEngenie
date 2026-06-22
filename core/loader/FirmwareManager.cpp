#include "FirmwareManager.h"

#include <iostream>

namespace Pure3X {

FirmwareManager::FirmwareManager()
    : firmwarePath(""),
      firmwareVersion("Unknown")
{
}

bool FirmwareManager::Initialize()
{
    std::cout << "[Loader] Inicializando Firmware Manager..."
              << std::endl;

    return true;
}

bool FirmwareManager::LoadFirmware(const std::string& path)
{
    firmwarePath = path;
    firmwareVersion = "PS3 Firmware";

    std::cout << "[Loader] Firmware carregada: "
              << firmwarePath << std::endl;

    return true;
}

const std::string& FirmwareManager::GetFirmwarePath() const
{
    return firmwarePath;
}

const std::string& FirmwareManager::GetVersion() const
{
    return firmwareVersion;
}

void FirmwareManager::Shutdown()
{
    std::cout << "[Loader] Encerrando Firmware Manager..."
              << std::endl;
}

} // namespace Pure3X
