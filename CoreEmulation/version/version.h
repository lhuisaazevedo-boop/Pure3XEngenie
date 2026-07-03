#pragma once

#include <string>

namespace Pure3X
{

// ================================
// Engine Information
// ================================

std::string GetEngineName();
std::string GetVersion();
std::string GetBuild();
std::string GetDeveloper();

// ================================
// Android Runtime
// ================================

std::string GetAndroidRuntimeName();
std::string GetAndroidRuntimeVersion();
std::string GetAndroidRuntimeStatus();

// ================================
// Platform Information
// ================================

std::string GetPlatform();
std::string GetArchitecture();
std::string GetLanguage();

// ================================
// Graphics
// ================================

std::string GetGraphicsBackend();

// ================================
// Engine Status
// ================================

std::string GetStatus();
std::string GetCodename();

} // namespace Pure3X
