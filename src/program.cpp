#include <Arduino.h>

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

const byte BUTTON_CLICK = LOW;

const byte BUZZER_PIN = 5;  // PWM
const byte LEFT_BUTTON_PIN = 9;
const byte DOWN_BUTTON_PIN = 10;
const byte UP_BUTTON_PIN = 11;
const byte RIGHT_BUTTON_PIN = 12;
const byte JOYSTICK_X_PIN = A0;
const byte JOYSTICK_Y_PIN = A1;
const byte JOYSTICK_K_PIN = A2;

Adafruit_SSD1306 screen(4);
int joystick_x = 0;
int joystick_y = 0;
int button_state = 0;

void updateJoystick()
{
    int joystick_x_raw = analogRead(JOYSTICK_X_PIN);
    int joystick_y_raw = analogRead(JOYSTICK_Y_PIN);
    joystick_x = joystick_x_raw;
    joystick_y = joystick_y_raw;
}

void updateButtonState()
{
    for (int i = LEFT_BUTTON_PIN; i <= RIGHT_BUTTON_PIN; i++)
    {
        if (digitalRead(i) == BUTTON_CLICK)
        {
            button_state = i;
            return;
        }
    }
    button_state = 0;
}

void render()
{
    screen.setCursor(0, 0);
    screen.println("Engineering Mode");
    screen.print("X: ");
    screen.println(joystick_x);
    screen.print("Y: ");
    screen.println(joystick_y);
    screen.print("Button: ");
    switch (button_state)
    {
        case LEFT_BUTTON_PIN:
            screen.print("LEFT ");
            break;
        case RIGHT_BUTTON_PIN:
            screen.print("RIGHT ");
            break;
        case UP_BUTTON_PIN:
            screen.print("UP ");
            break;
        case DOWN_BUTTON_PIN:
            screen.print("DOWN ");
            break;
    }
    screen.println(button_state);
    digitalWrite(BUZZER_PIN, button_state == 0 ? LOW : HIGH);
}

void setup()
{
    pinMode(BUZZER_PIN, OUTPUT);
    for (int i = LEFT_BUTTON_PIN; i <= RIGHT_BUTTON_PIN; i++)
    {
        pinMode(i, INPUT);
    }
    screen.begin(SSD1306_SWITCHCAPVCC, 0x3c);
    screen.setTextColor(WHITE);
}

void loop()
{
    updateJoystick();
    updateButtonState();

    screen.clearDisplay();
    render();
    screen.display();
}
