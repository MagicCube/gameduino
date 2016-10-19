#ifndef BUTTONS_H
#define BUTTONS_H

#include "Component.h"

#define LEFT_BUTTON 1
#define DOWN_BUTTON 2
#define UP_BUTTON 4
#define RIGHT_BUTTON 8

class Buttons : public Component
{
public:
    int state;

    void begin();
    void update();
};

#endif
