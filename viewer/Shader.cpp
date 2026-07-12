#include "Shader.h"

#include <GLES3/gl3.h>
#include <iostream>

bool Shader::Initialize() {
    if (initialized)
        return true;

    initialized = true;

    std::cout << "[Shader] Inicializado." << std::endl;
    return true;
}

unsigned int Shader::Compile(unsigned int type, const char* source) {
    GLuint shader = glCreateShader(type);

    glShaderSource(shader, 1, &source, nullptr);
    glCompileShader(shader);

    GLint success = 0;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);

    if (!success) {
        char infoLog[512];
        glGetShaderInfoLog(shader, sizeof(infoLog), nullptr, infoLog);

        std::cout << "[Shader] Erro de compilação:\n"
                  << infoLog << std::endl;

        glDeleteShader(shader);
        return 0;
    }

    return shader;
}

bool Shader::Load(const char* vertexSource,
                  const char* fragmentSource) {

    GLuint vertex = Compile(GL_VERTEX_SHADER, vertexSource);
    if (!vertex)
        return false;

    GLuint fragment = Compile(GL_FRAGMENT_SHADER, fragmentSource);
    if (!fragment) {
        glDeleteShader(vertex);
        return false;
    }

    program = glCreateProgram();

    glAttachShader(program, vertex);
    glAttachShader(program, fragment);
    glLinkProgram(program);

    GLint success = 0;
    glGetProgramiv(program, GL_LINK_STATUS, &success);

    glDeleteShader(vertex);
    glDeleteShader(fragment);

    if (!success) {
        char infoLog[512];
        glGetProgramInfoLog(program, sizeof(infoLog), nullptr, infoLog);

        std::cout << "[Shader] Erro ao linkar:\n"
                  << infoLog << std::endl;

        glDeleteProgram(program);
        program = 0;

        return false;
    }

    std::cout << "[Shader] Programa criado." << std::endl;
    return true;
}

void Shader::Bind() {
    if (program != 0)
        glUseProgram(program);
}

void Shader::Shutdown() {
    if (!initialized)
        return;

    if (program != 0) {
        glDeleteProgram(program);
        program = 0;
    }

    initialized = false;

    std::cout << "[Shader] Encerrado." << std::endl;
}

unsigned int Shader::GetProgram() const {
    return program;
}
