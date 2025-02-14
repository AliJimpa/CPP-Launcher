#pragma once

#include "Logic.h"

class Widget
{
private:
    Logic *myLogic;

protected:
    Logic *GetBase() const;

public:
    Widget(Logic *logic);
    virtual void OnRender() = 0; // Abstract method
};