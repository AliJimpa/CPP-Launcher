#pragma once

#include <iostream>
#include <stdio.h>
#include <GLFW/glfw3.h>
#include "imgui/imgui.h"
#include "imgui//backends/imgui_impl_glfw.h"
#include "imgui/backends/imgui_impl_opengl2.h"

#define LOG(X) std::cout << X << std::endl
#define GETLENGTH(X) sizeof(X) / sizeof(X[0])

class GWindow
{
private:
    /* data */
public:
    GWindow(/* args */)
    {
    }
    ~GWindow()
    {
    }
};

void glfw_error_callback(int error, const char *description)
{
    fprintf(stderr, "GLFW Error %d: %s\n", error, description);
}

void OnAppBegin()
{
}

void OnWindowOpen()
{
    ImGui::Begin("Another Window"); // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
    ImGui::Text("Hello from another window!");
    ImGui::End();
}
