#ifndef PURE3X_CELL_SCHEDULER_H
#define PURE3X_CELL_SCHEDULER_H

namespace Pure3X
{

class CellScheduler
{
public:
    static bool Initialize();
    static void Shutdown();

    static bool IsReady();

    static void Update();

private:
    static bool ready;
};

} // namespace Pure3X

#endif
