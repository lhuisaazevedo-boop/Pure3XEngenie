#ifndef PURE3XENGENIE_CONFIG_MANAGER_H
#define PURE3XENGENIE_CONFIG_MANAGER_H

namespace Pure3XEngenie {
namespace Config {

bool Initialize();
bool Load();
bool Save();
void ResetToDefault();
void Shutdown();

} // namespace Config
} // namespace Pure3XEngenie

#endif // PURE3XENGENIE_CONFIG_MANAGER_H
