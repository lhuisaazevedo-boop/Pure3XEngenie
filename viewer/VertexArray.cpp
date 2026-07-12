#include "VertexArray.h"

#include <iostream>

VertexArray::VertexArray()
    : id(0) {
}

bool VertexArray::Create() {
    id = 1;

    std::cout << "[VertexArray] Criado." << std::endl;

    return true;
}

void VertexArray::Bind() {
    std::cout << "[VertexArray] Vinculado." << std::endl;
}

void VertexArray::Destroy() {
    id = 0;

    std::cout << "[VertexArray] Destruído." << std::endl;
}
