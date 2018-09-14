# Simple Blink
These two codes will blink an LED at a set speed on the listed microcontrollers. These codes depend on the msp430.h library. 

## MSP430G2553
The code for this processor will blink the LED labeled P1.0 at a set speed. This speed can be altered by going into the main.c of the folder and altering the integer in the __delay_cycles line of code.

## MSP430F5529
The code for this processor is very similar to the other processor in this folder. The only change is the pin assignments for this specific board. So like the previous board the speed of the blinking can be altered by going into the main.c of the MSP430F5529 folder and altering the integer in the __delay_cycles line of the code.

 * Author: Eric Schroeder
 * Written: September 14, 2018
 * Last Updated September 14, 2018
