#pragma once

class VertexArray {
public:
    VertexArray();

    bool Create();

    void Bind();

    void Destroy();

private:
    unsigned int id;
};
