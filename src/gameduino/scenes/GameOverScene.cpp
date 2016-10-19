#include "GameOverScene.h"

void GameOverScene::update(GameConsole console)
{
    console.display.clearDisplay();
    console.display.setCursor(0, 0);
    console.display.setTextSize(2);
    console.display.println("    GAME");
    console.display.println("    OVER");
}
