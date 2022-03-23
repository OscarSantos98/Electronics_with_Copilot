// Create a program that moves a servomotor 180 degrees and then back to 0 degrees.

// Import the Servo library
#include <Servo.h>

// Create a servo object
Servo myservo;

// Setup
void setup()
{
    // Initialize the servo object
    myservo.attach(9);
}

// Loop
void loop()
{
    // Move by 180 degrees step by step
    for (int i = 0; i < 180; i++)
    {
        myservo.write(i);
        delay(15);
    }
    // Move back to 0 step by step
    for (int i = 180; i >= 0; i--)
    {
        myservo.write(i);
        delay(15);
    }
    
}