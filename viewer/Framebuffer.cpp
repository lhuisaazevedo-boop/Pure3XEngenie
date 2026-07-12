#include "Framebuffer.h"

#include <GLES3/gl3.h>
#include <iostream>

bool Framebuffer::Initialize(int w, int h) {
    if (initialized)
        return true;

    width = w;
    height = h;

    glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    glGenTextures(1, &colorTexture);
    glBindTexture(GL_TEXTURE_2D, colorTexture);

    glTexImage2D(
        GL_TEXTURE_2D,
        0,
        GL_RGBA,
        width,
        height,
        0,
        GL_RGBA,
        GL_UNSIGNED_BYTE,
        nullptr);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glFramebufferTexture2D(
        GL_FRAMEBUFFER,
        GL_COLOR_ATTACHMENT0,
        GL_TEXTURE_2D,
        colorTexture,
        0);

    glGenRenderbuffers(1, &depthBuffer);
    glBindRenderbuffer(GL_RENDERBUFFER, depthBuffer);

    glRenderbufferStorage(
        GL_RENDERBUFFER,
        GL_DEPTH_COMPONENT16,
        width,
        height);

    glFramebufferRenderbuffer(
        GL_FRAMEBUFFER,
        GL_DEPTH_ATTACHMENT,
        GL_RENDERBUFFER,
        depthBuffer);

    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE) {
        std::cout << "[Framebuffer] Falha ao criar Framebuffer." << std::endl;
        return false;
    }

    glBindFramebuffer(GL_FRAMEBUFFER, 0);

    initialized = true;

    std::cout << "[Framebuffer] Inicializado." << std::endl;

    return true;
}

void Framebuffer::Bind() {
    if (!initialized)
        return;

    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
}

void Framebuffer::Unbind() {
    glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void Framebuffer::Shutdown() {
    if (!initialized)
        return;

    if (depthBuffer)
        glDeleteRenderbuffers(1, &depthBuffer);

    if (colorTexture)
        glDeleteTextures(1, &colorTexture);

    if (fbo)
        glDeleteFramebuffers(1, &fbo);

    initialized = false;

    std::cout << "[Framebuffer] Encerrado." << std::endl;
}

unsigned int Framebuffer::GetTexture() const {
    return colorTexture;
}
