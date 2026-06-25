#include "VertexBuffer.h"

#include <iostream>

namespace Pure3X {

VertexBuffer::VertexBuffer()
    : initialized(false)
{
}

bool VertexBuffer::Initialize()
{
    std::cout << "[RSX] Inicializando Vertex Buffer..." << std::endl;

    initialized = true;
    vertices.clear();

    return true;
}

void VertexBuffer::Shutdown()
{
    std::cout << "[RSX] Encerrando Vertex Buffer..." << std::endl;

    initialized = false;
    vertices.clear();
}

void VertexBuffer::Clear()
{
    vertices.clear();
}

void VertexBuffer::AddVertex(float x, float y, float z)
{
    if (!initialized)
        return;

    vertices.push_back(x);
    vertices.push_back(y);
    vertices.push_back(z);
}

const std::vector<float>& VertexBuffer::GetVertices() const
{
    return vertices;
}

} // namespace Pure3X
