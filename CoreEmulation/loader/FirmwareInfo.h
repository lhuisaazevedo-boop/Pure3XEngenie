#ifndef PURE3X_FIRMWARE_INFO_H
#define PURE3X_FIRMWARE_INFO_H

#include <string>

namespace Pure3X {

class FirmwareInfo {
public:
    FirmwareInfo();

    void SetVersion(const std::string& version);
    void SetRegion(const std::string& region);
    void SetBuild(const std::string& build);

    const std::string& GetVersion() const;
    const std::string& GetRegion() const;
    const std::string& GetBuild() const;

private:
    std::string version;
    std::string region;
    std::string build;
};

} // namespace Pure3X

#endif // PURE3X_FIRMWARE_INFO_H
