#pragma once

#include <string>

namespace Pure3XEngenie {
namespace Logger {

bool Initialize();
void Shutdown();

void Info(const std::string& message);
void Warning(const std::string& message);
void Error(const std::string& message);

} // namespace Logger
} // namespace Pure3XEngenie
