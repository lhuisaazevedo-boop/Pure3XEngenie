#include "IndexBuffer.h"

#include <iostream>

IndexBuffer::IndexBuffer()
    : id(0) {
}

bool IndexBuffer::Create() {
    id = 1;

    std::cout << "[IndexBuffer] Criado." << std::endl;

    return true;
}

void IndexBuffer::Bind() {
    std::cout << "[IndexBuffer] Vinculado." << std::endl;
}

void IndexBuffer::Destroy() {
    id = 0;

    std::cout << "[IndexBuffer] Destruído." << std::endl;
}
