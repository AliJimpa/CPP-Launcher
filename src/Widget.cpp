#include "Widget.h"

Widget::Widget(Logic *logic) : myLogic(logic)
{

}

Logic* Widget::GetBase() const
{
    return myLogic;
}