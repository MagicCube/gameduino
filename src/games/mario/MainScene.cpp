#include "MainScene.h"

#include "images/background.h"
#include "images/sprite.h"

void MainScene::update(GameConsole console)
{
    console.display.drawBitmap(0, 0, BACKGROUND, 128, 64, WHITE);
    console.display.drawBitmap(50, 64 - 8 - 24, SPRITE_FORWARD_1, 24, 24, WHITE);
}
