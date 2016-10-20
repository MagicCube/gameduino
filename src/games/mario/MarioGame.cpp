#include <Arduino.h>

#include "../../gameduino/GameConsole.h"

#include "../../gameduino/scenes/GameScene.h"
#include "../../gameduino/scenes/GameOverScene.h"
#include "../../gameduino/scenes/EngineeringModeScene.h"
#include "MainScene.h"

GameConsole console;
EngineeringModeScene mainScene;

void setup()
{
    console.begin();
}

void loop()
{
    console.update();
    mainScene.update(console);
    console.render();
}
