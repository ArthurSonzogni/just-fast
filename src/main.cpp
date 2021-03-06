#include "JustFastUi/JustFastUi.h"
#include <ftxui/component/screen_interactive.hpp>

int main()
{
    auto screen = ftxui::ScreenInteractive::Fullscreen();

    JustFastUi ui;
    ui.setQuitFunction(screen.ExitLoopClosure());
    screen.Loop(&ui);
    return 0;
}
