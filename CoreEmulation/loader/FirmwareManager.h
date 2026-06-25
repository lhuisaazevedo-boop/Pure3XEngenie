#ifndef PURE3X_FIRMWARE_MANAGER_H
#define PURE3X_FIRMWARE_MANAGER_H

#include <string>

namespace Pure3X {

class FirmwareManager {
public:
    FirmwareManager();

    bool Initialize();
    bool LoadFirmware(const std::string& path);

    const std::string& GetFirmwarePath() const;
    const std::string& GetVersion() const;

    void Shutdown();

private:
    std::string firmwarePath;
    std::string firmwareVersion;
};

} // namespace Pure3X

#endif // PURE3X_FIRMWARE_MANAGER_H
