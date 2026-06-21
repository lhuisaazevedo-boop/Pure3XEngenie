#ifndef PURE3X_FILE_CACHE_H
#define PURE3X_FILE_CACHE_H

namespace Pure3X {

class FileCache {
public:
    FileCache();

    bool Initialize();
    void Clear();
    void Shutdown();

private:
    bool m_initialized;
};

} // namespace Pure3X

#endif
