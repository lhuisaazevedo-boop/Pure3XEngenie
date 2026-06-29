#ifndef PURE3X_SPE_H
#define PURE3X_SPE_H

#include <string>

namespace Pure3X
{

class SPE
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static int GetCount();
    static std::string GetName();

private:
    static bool ready;
    static int count;
};

}

#endif
