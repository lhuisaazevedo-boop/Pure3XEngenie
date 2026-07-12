#pragma once

class IndexBuffer {
public:
    IndexBuffer();

    bool Create();

    void Bind();

    void Destroy();

private:
    unsigned int id;
};
