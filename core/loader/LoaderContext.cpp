#include "LoaderContext.h"

namespace Pure3X {

LoaderContext::LoaderContext()
{
    Reset();
}

void LoaderContext::Reset()
{
    filePath.clear();
    type = ExecutableType::Unknown;
    imageBase = 0;
    imageSize = 0;
}

} // namespace Pure3X
