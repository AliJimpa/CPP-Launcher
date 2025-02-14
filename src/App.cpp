#include "App.h"

#include "UI.h"
#include "W_Button.h"


App::App()
{
    AppLogic = new Logic();
    widgets.push_back(new W_Button(AppLogic));
    //widgets.push_back(new W_ShowMessage(AppLogic));
}

void App::run()
{
    UI AppUi(this);

    // Init UserInterface
    if (!AppUi.init())
    {
        return;
    }

    // Main loop
    while (AppUi.shouldRun())
    {
        AppUi.render(widgets); // Render UI
    }

    AppUi.shutdown(); // Cleanup
}
