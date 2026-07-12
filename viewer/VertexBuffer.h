#pragma once

class VertexBuffer {
public:
    VertexBuffer();

    bool Create();

    void Bind();

    void Destroy();

private:
    unsigned int id;
};
