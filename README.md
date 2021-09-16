# Morse-Code-Encoder
Morse code encoder that encodes strings and outputs using LEDs.


## Components Need
1. Arduino Uno
2. LED x3
3. Resistors - 220ohm - x3
4. Breadboard

## Circuit
![Circuit](https://user-images.githubusercontent.com/65500167/133460056-dbc13d0e-6b1a-43e5-9f7a-c8f41747e41b.png)

## Working
Enter the string in serial monitor and the leds start wokring according to the code, the LED at pin13, displays the code for the character, LED at the PIN9 displays the pause between each charcter, i.e if the given string is he, first the LED at PIN13 blinks accodring to H morse, after displaying H, the LED at pin9 to notify the end of a character.
LED at pin8 blinks after each words.

<br />
If you do not have an arduino, you can simulate on Autodesk Tinkercard - https://www.tinkercad.com/
