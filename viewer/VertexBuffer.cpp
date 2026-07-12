#include "VertexBuffer.h"

#include <iostream>

VertexBuffer::VertexBuffer()
    : id(0) {
}

bool VertexBuffer::Create() {
    id = 1;

    std::cout << "[VertexBuffer] Criado." << std::endl;

    return true;
}

void VertexBuffer::Bind() {
    std::cout << "[VertexBuffer] Vinculado." << std::endl;
}

void VertexBuffer::Destroy() {
    id = 0;

    std::cout << "[VertexBuffer] Destruído." << std::endl;
}
