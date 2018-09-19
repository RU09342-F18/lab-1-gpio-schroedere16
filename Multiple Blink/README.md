# Multiple Blink
These two codes will blink two LEDs at two varying speeds on their respective microcontrollers. Both of these codes rely on the msp430.h library. 

## MSP430G2553
The code for this processor will blink two different LEDs at two different speeds. The speed of the LEDs can be changed by the user if desired. The user would need to change the integer comparing the two variables i and k. While changing these numbers to be larger will increase the time between blinks decreasing the numbers will shorten the time inbetween blinks. Also, if the number is made too small the LED will be turning on and off so fast it will only appear on to the human eye.

## MSP430F5529
The code for this processor will blink two different LEDs at two different speeds almost identically to the previous processor. The only difference is pin assignments to interface with this specific microcontroller and the time between blinks has been altered. The changes to the blink speed can also be made by the user in the same manner as for the previous microcontroller. 

* Author: Eric Schroeder
* Written: September 15, 2018
* Last Updated: September 19, 2018
