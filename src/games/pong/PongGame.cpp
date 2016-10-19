#include <Arduino.h>

#include "../../gameduino/GameConsole.h"

#include "../../gameduino/scenes/GameScene.h"
#include "../../gameduino/scenes/GameOverScene.h"
#include "../../gameduino/scenes/EngineeringModeScene.h"
#include "MainScene.h"

EngineeringModeScene engineeringModeScene;

GameConsole console;

void setup()
{
    console.begin();
}

void loop()
{
    console.update();
    engineeringModeScene.update(console);
    console.render();
}
