import serial
import pyautogui
Arduino_Serial = serial.Serial('com4',9600)

while 1:
    incoming_data = str (Arduino_Serial.readline())
    print (incoming_data)    ;
    if 'pause' in incoming_data:
        pyautogui.keyDown('space')

    incoming_data = "";
