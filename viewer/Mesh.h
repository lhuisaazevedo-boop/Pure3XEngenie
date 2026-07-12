#pragma once

#include <vector>

class Mesh {
public:
    Mesh() = default;
    ~Mesh() = default;

    bool Initialize();

    void Draw();

    void Shutdown();

    void SetVertices(const std::vector<float>& vertices);
    void SetIndices(const std::vector<unsigned int>& indices);

    const std::vector<float>& GetVertices() const;
    const std::vector<unsigned int>& GetIndices() const;

private:
    bool initialized = false;

    std::vector<float> vertices;
    std::vector<unsigned int> indices;

    unsigned int vao = 0;
    unsigned int vbo = 0;
    unsigned int ebo = 0;
};
