#include "EngineeringModeScene.h"

void EngineeringModeScene::update(GameConsole console)
{
    console.display.clearDisplay();
    console.display.setCursor(0, 0);
    console.display.println("Engineering Mode");

    console.display.print("X: ");
    console.display.println(console.joystick.x);
    console.display.print("Y: ");
    console.display.println(console.joystick.y);

    console.display.print("Button: ");
    switch(console.buttons.state)
    {
        case LEFT_BUTTON:
            console.display.print("Left ");
            break;
        case RIGHT_BUTTON:
            console.display.print("Right ");
            break;
        case UP_BUTTON:
            console.display.print("Up ");
            break;
        case DOWN_BUTTON:
            console.display.print("Down ");
            break;
    }
    console.display.println(console.buttons.state);
}
