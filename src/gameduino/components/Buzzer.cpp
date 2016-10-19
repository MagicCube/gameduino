#include "Buzzer.h"

void Buzzer::begin()
{
    pinMode(BUZZER_PIN, OUTPUT);
}

void Buzzer::beep()
{
    digitalWrite(BUZZER_PIN, HIGH);
    delay(50);
    digitalWrite(BUZZER_PIN, LOW);
    delay(50);
}
