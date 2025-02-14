#pragma once

#include "App.h"
#include <GLFW/glfw3.h>
#include "imgui//imgui.h"


class UI
{
private:
    App* myApp;
    bool ShowUI = true;
    GLFWwindow *window;
    ImVec4 clear_color;
    static void glfw_error_callback(int error, const char *description);

public:
    UI(App* app);
    bool init();
    void render(const std::vector<Widget*>& widgets);
    void shutdown();
    bool shouldRun() const;
};