#ifndef JOYSTICK_H
#define JOYSTICK_H

#include "Component.h"

#define JOYSTICK_X_PIN 0
#define JOYSTICK_Y_PIN 1
#define JOYSTICK_K_PIN 2

class Joystick : public Component
{
public:
    int x;
    int y;

    void begin();
    void update();
};

#endif
