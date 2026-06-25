#ifndef PURE3X_TEXTURE_MANAGER_H
#define PURE3X_TEXTURE_MANAGER_H

#include <string>

namespace Pure3X {

class TextureManager {
public:
    TextureManager();

    bool Initialize();
    void Shutdown();

    bool LoadTexture(const std::string& path);
    void UnloadTexture();

    const std::string& GetCurrentTexture() const;

private:
    bool initialized;
    std::string currentTexture;
};

} // namespace Pure3X

#endif // PURE3X_TEXTURE_MANAGER_H
