#pragma once

#include <string>

class Shader {
public:
    Shader() = default;
    ~Shader() = default;

    bool Initialize();

    bool Load(const char* vertexSource,
              const char* fragmentSource);

    void Bind();

    void Shutdown();

    unsigned int GetProgram() const;

private:
    bool initialized = false;

    unsigned int program = 0;

    unsigned int Compile(unsigned int type,
                         const char* source);
};
