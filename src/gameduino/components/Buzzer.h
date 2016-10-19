#ifndef BUZZER_H
#define BUZZER_H

#include "Component.h"

#define BUZZER_PIN 5

class Buzzer : public Component
{
public:
    void begin();
    void beep();
};

#endif
