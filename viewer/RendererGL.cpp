#include "RendererGL.h"

#include <GLES3/gl3.h>
#include <iostream>

bool RendererGL::Initialize() {
    if (initialized)
        return true;

    glViewport(0, 0, width, height);
    glEnable(GL_DEPTH_TEST);

    const std::string vertexShader = R"(#version 300 es
layout(location = 0) in vec3 aPosition;

void main() {
    gl_Position = vec4(aPosition, 1.0);
}
)";

    const std::string fragmentShader = R"(#version 300 es
precision mediump float;

out vec4 FragColor;

void main() {
    FragColor = vec4(0.2, 0.7, 1.0, 1.0);
}
)";

    if (!shader.Initialize()) {
        std::cout << "[RendererGL] Falha ao inicializar Shader."
                  << std::endl;
        return false;
    }

    if (!shader.Load(vertexShader.c_str(), fragmentShader.c_str())) {
        std::cout << "[RendererGL] Falha ao carregar Shader."
                  << std::endl;
        return false;
    }

    shader.Bind();

    float vertices[] = {
         0.0f,  0.5f, 0.0f,
        -0.5f, -0.5f, 0.0f,
         0.5f, -0.5f, 0.0f
    };

    glGenVertexArrays(1, &vao);
    glGenBuffers(1, &vbo);

    glBindVertexArray(vao);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(
        GL_ARRAY_BUFFER,
        sizeof(vertices),
        vertices,
        GL_STATIC_DRAW);

    glVertexAttribPointer(
        0,
        3,
        GL_FLOAT,
        GL_FALSE,
        3 * sizeof(float),
        (void*)0);

    glEnableVertexAttribArray(0);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

    initialized = true;

    std::cout << "[RendererGL] Inicializado." << std::endl;

    return true;
}

void RendererGL::BeginFrame() {
    if (!initialized)
        return;

    glViewport(0, 0, width, height);

    glClearColor(
        clearColor[0],
        clearColor[1],
        clearColor[2],
        clearColor[3]);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void RendererGL::DrawModel(Model&) {
    if (!initialized)
        return;

    shader.Bind();

    glBindVertexArray(vao);
    glDrawArrays(GL_TRIANGLES, 0, 3);
    glBindVertexArray(0);
}

void RendererGL::EndFrame() {
    if (!initialized)
        return;

    glFlush();
}

void RendererGL::Shutdown() {
    if (!initialized)
        return;

    if (vao != 0)
        glDeleteVertexArrays(1, &vao);

    if (vbo != 0)
        glDeleteBuffers(1, &vbo);

    if (ebo != 0)
        glDeleteBuffers(1, &ebo);

    shader.Shutdown();

    initialized = false;

    std::cout << "[RendererGL] Encerrado." << std::endl;
}
