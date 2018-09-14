# Button Blink
These two codes show two different types of button presses on two different microcontrollers. These two codes depend on the msp430.h library. 

## MSP430G2553
The code for the MSP430G2553 treats the microcontoller as a switch essentially. When the button is pressed the LED will turn on and when the button is then released the LED will then turn off.

## MSP430F5529
The code for the MSP430F5529 toggles the LED. Therefore when the microcontroller is loaded with the code the LED will begin off. Once the button is intially pressed the LED will then toggle to become lit. Then the button can be pressed to turn the LED off again. 
