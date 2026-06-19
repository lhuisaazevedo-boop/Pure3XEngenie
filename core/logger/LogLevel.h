#ifndef PURE3X_LOGLEVEL_H
#define PURE3X_LOGLEVEL_H

namespace Pure3X {

enum class LogLevel
{
    Info,
    Debug,
    Warning,
    Error,
    Fatal,

    Boot,
    Engine,
    Loader,
    VFS,
    Network,
    Config,
    System
};

} // namespace Pure3X

#endif
