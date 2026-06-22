#include "FirmwareInfo.h"

namespace Pure3X {

FirmwareInfo::FirmwareInfo()
    : version("Unknown"),
      region("Unknown"),
      build("Unknown")
{
}

void FirmwareInfo::SetVersion(const std::string& value)
{
    version = value;
}

void FirmwareInfo::SetRegion(const std::string& value)
{
    region = value;
}

void FirmwareInfo::SetBuild(const std::string& value)
{
    build = value;
}

const std::string& FirmwareInfo::GetVersion() const
{
    return version;
}

const std::string& FirmwareInfo::GetRegion() const
{
    return region;
}

const std::string& FirmwareInfo::GetBuild() const
{
    return build;
}

} // namespace Pure3X
