#include <Servo.h>

Servo servo;
int pos = 0;

#define POT_PIN 0

void setup()
{
    servo.attach(7);
}

void loop()
{
    int value = analogRead(0);
    value = map(value, 0, 1023, 0, 180);
    servo.write(value);
}
