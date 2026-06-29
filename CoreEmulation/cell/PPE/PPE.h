#ifndef PURE3X_PPE_H
#define PURE3X_PPE_H

#include <string>

namespace Pure3X
{

class PPE
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static std::string GetName();
    static int GetThreadCount();

private:
    static bool ready;
};

} // namespace Pure3X

#endif
