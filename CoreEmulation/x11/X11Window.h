#ifndef PURE3X_X11_WINDOW_H
#define PURE3X_X11_WINDOW_H

#include <string>

namespace Pure3X
{

class X11Window
{
public:
    bool Initialize(
        const std::string& title = "Pure3XEngenie",
        int width = 1280,
        int height = 720
    );

    void PollEvents();

    bool IsRunning() const;

    void Shutdown();

private:
    bool m_running = false;
};

} // namespace Pure3X

#endif
