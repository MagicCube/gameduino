#include "GameConsole.h"

#include "./images/logo.h"

GameConsole::GameConsole(): display(4)
{

}

void GameConsole::begin()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
    display.setTextColor(WHITE);

    display.fillScreen(WHITE);
    display.drawBitmap((128 - 80)/ 2, (64 - 56) / 2, GAMEDUINO_LOGO, 80, 56, BLACK);

    buzzer.begin();
    buzzer.beep();

    delay(800);
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
