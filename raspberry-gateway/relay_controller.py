import RPi.GPIO as GPIO

RELAY_PIN = 18

GPIO.setmode(GPIO.BCM)
GPIO.setup(RELAY_PIN, GPIO.OUT)

def activate_alarm():
    GPIO.output(RELAY_PIN, GPIO.HIGH)

def deactivate_alarm():
    GPIO.output(RELAY_PIN, GPIO.LOW)
