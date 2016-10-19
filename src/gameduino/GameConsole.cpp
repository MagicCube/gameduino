#include "GameConsole.h"

GameConsole::GameConsole(): display(4)
{

}

void GameConsole::begin()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
    display.setTextColor(WHITE);
    display.clearDisplay();

    buzzer.begin();
    buzzer.beep();
}

void GameConsole::update()
{
    this->joystick.update();
    this->buttons.update();
}

void GameConsole::render()
{
    this->display.display();
}
