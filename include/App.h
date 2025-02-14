#pragma once

#include <vector>
#include "Widget.h"
#include "Logic.h"

class App
{
private:
    Logic* AppLogic;
    std::vector<Widget *> widgets;

public:
    App();
    // const std::vector<Widget*>& GetAllWidgets() const { return Widgets;}
    void run();
};
