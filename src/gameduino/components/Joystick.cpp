#include "Joystick.h"

void Joystick::begin()
{

}

void Joystick::update()
{
    int rawX = analogRead(JOYSTICK_X_PIN);
    int rawY = analogRead(JOYSTICK_Y_PIN);
    if (rawX > 490 && rawX < 520)
    {
        rawX = 512;
    }
    else if (rawX > 1000)
    {
        rawX = 1023;
    }
    if (rawY > 490 && rawY < 520)
    {
        rawY = 512;
    }
    else if (rawY > 1000)
    {
        rawY = 1023;
    }

    x = map(rawX, 0, 1023, -100, 100);
    y = map(rawY, 0, 1023, -100, 100);
}
