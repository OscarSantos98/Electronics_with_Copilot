# Create a simple blink program with micropython

# Import required libraries
import time
import machine

# Create a pin object for the LED
led = machine.Pin(2, machine.Pin.OUT)

# Infinite loop
while True:
    # Turn the LED on
    led.on()
    # Wait for 1 second
    time.sleep(0.5)
    # Turn the LED off
    led.off()
    # Wait for 0.5 second
    time.sleep(0.5)