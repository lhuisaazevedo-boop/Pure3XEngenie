#ifndef PURE3X_CELL_SYSTEM_H
#define PURE3X_CELL_SYSTEM_H

namespace Pure3X
{

class CellSystem
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

private:
    static bool ready;
};

} // namespace Pure3X

#endif
