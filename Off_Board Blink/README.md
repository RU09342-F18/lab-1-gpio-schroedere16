# Off Board Blink
This code is able to blink an LED on a breadboard with only the MSP430G2553 removable chip. The circuit created also requires a 220 Ohm resistor along with an LED. This code depends on the msp430.h library.

## MSP430G2553
The code will blink an LED on a bread board with just the removable chip in MSP430G2553. Obviously the code must be loaded onto the board before creating the circuit. Also, a warning when removing the chip, try to pull directly up as pulling at any angle can bend the pins and potentially damage microcontroller. Once you have removed the chip it can now be placed in a bread board. The first pin on the chip will be connected to the MSP430G2553 on the pin labeled 3.3V. The second pin is connected to the LED then the 220 Ohm resistor which is connected to ground. The 20th pin on the chip is connected to ground. The 17th pin is connected to the pin labeled TEST on the microcontroller. Finally the 16th pin is connected to the pin labeled RST on the microcontroller. Once all of these connections have been made simple plug in the MSP430G2553 into a usb port for power and watch the LED go. While the chip is connected to the microcontroller still it is only using it for power and reset terminals. The entire code is running off of the small chip in the breadboard. A picture of this completed circuit can be seen below.


PICTURE OF CIRCUIT HERE

The code can be viewed in the folder above. It contains two delays to slow down the LED blink to allow it to be seen. The user can alter the time between blinks by decreasing or incresing the number in the __delay_cycles lines of code. 

  * Author: Eric Schroeder
  * Written: September 16, 2018
  * Last Updated: Septemer 16, 2018



