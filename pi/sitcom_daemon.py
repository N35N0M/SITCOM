import subprocess
import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode(GPIO.BOARD)

i0pin = 11
i1pin = 12
syncpin = 7
try:
    GPIO.setup(i0pin, GPIO.IN)
    GPIO.setup(i1pin, GPIO.IN)
    GPIO.setup(syncpin, GPIO.IN)
    
    while True:
        GPIO.wait_for_edge(syncpin, GPIO.RISING)
        input_code = int(GPIO.input(i0pin)) + (int(GPIO.input(i1pin))*2)
        
finally:
    GPIO.cleanup()
    
