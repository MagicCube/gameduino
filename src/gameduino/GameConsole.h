#ifndef GAME_CONSOLE_H
#define GAME_CONSOLE_H

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#include "./components/Buzzer.h"
#include "./components/Buttons.h"
#include "./components/Joystick.h"

class GameConsole
{

public:
    Adafruit_SSD1306 display;
    Buzzer buzzer;
    Buttons buttons;
    Joystick joystick;

    GameConsole();
    void begin();
    void update();
    void render();
};

#endif
