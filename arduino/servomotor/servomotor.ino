// Create a program that moves a servomotor to a certain position based on a potentiometer input.

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
    // Read the analog input
    int analogValue = analogRead(A0);

    // Map the analog value to a servo position
    int servoPosition = map(analogValue, 0, 1023, 0, 180);

    // Set the servo position
    myservo.write(servoPosition);

    // Wait a bit
    delay(100);
}