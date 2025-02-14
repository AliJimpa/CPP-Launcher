#pragma once

#include "Widget.h"

class W_ShowMessage : public Widget
{
public:
    W_ShowMessage(Logic *logic) : Widget(logic) {}
    void OnRender() override
    {
        // std::cout << "Rendering Button Widget\n";
        ImGui::Begin("Fuck"); // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Text("esefesfesf");
        ImGui::End();
    }
}
