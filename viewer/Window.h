#pragma once

class Window {
public:
    bool Initialize(int w, int h, const char* title);

    void PollEvents();

    bool IsOpen() const;

    void Close();

    void Shutdown();

private:
    bool opened = true;

    int width = 0;
    int height = 0;
};
