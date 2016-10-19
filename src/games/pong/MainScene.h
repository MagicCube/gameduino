#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include "../../gameduino/GameConsole.h"

#include "../../gameduino/scenes/GameScene.h"

class MainScene : public GameScene
{
public:
    void update(GameConsole console);
};

#endif
