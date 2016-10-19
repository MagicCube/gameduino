#include <Arduino.h>

#include "../../gameduino/GameConsole.h"

#include "../../gameduino/scenes/GameScene.h"
#include "../../gameduino/scenes/GameOverScene.h"
#include "../../gameduino/scenes/EngineeringModeScene.h"
#include "MainScene.h"

GameConsole console;

void setup()
{
    console.begin();
}

void loop()
{
    console.update();
    console.render();
}
