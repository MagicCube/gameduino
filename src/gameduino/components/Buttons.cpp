#include "Buttons.h"

#define LEFT_BUTTON_PIN 9
#define DOWN_BUTTON_PIN 10
#define UP_BUTTON_PIN 11
#define RIGHT_BUTTON_PIN 12

void Buttons::begin()
{
    for (int i = LEFT_BUTTON_PIN; i <= RIGHT_BUTTON_PIN; i++)
    {
        pinMode(i, INPUT);
    }
}

void Buttons::update()
{
    for (int i = LEFT_BUTTON_PIN; i <= RIGHT_BUTTON_PIN; i++)
    {
        if (digitalRead(i) == LOW)
        {
            switch (i)
            {
                case LEFT_BUTTON_PIN:
                    state = LEFT_BUTTON;
                    break;
                case RIGHT_BUTTON_PIN:
                    state = RIGHT_BUTTON;
                    break;
                case UP_BUTTON_PIN:
                    state = UP_BUTTON;
                    break;
                case DOWN_BUTTON_PIN:
                    state = DOWN_BUTTON;
                    break;
            }
            return;
        }
    }
    state = 0;
}
