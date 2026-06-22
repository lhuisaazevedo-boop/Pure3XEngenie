#pragma once

#include <vector>
#include <cstdint>

namespace Pure3X {

class VertexBuffer
{
public:
    VertexBuffer();

    bool Initialize();
    void Shutdown();

    void Clear();

    void AddVertex(float x, float y, float z);

    const std::vector<float>& GetVertices() const;

private:
    bool initialized;
    std::vector<float> vertices;
};

} // namespace Pure3X
