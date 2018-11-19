#include <Servo.h>

#define SERVO_PIN 7

Servo servo;

void setup()
{
    servo.attach(SERVO_PIN); 
    Serial.begin(9600);
}

void loop()
{
    Serial.flush();

    if(Serial.available() > 0)
    {
        String received = Serial.readString();
        Serial.print("Moving servo to ");
        Serial.print(received.toInt());
        Serial.println(" degrees.");

        servo.write(received.toInt());
        delay(150);
    }
}
