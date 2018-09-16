/*  Author: Eric Schroeder
    Created: September 15, 2018
    Last updated: September 16, 2018 */

#include <msp430.h>             //library used for msp430 microcontrollers

void main(void)
{
   WDTCTL = WDTPW + WDTHOLD;    // Disable watchdog timer
   P1DIR = BIT0;                // This sets P1.0 to be an output
   P2DIR = ~BIT0;               // This sets P2.0 to be an input

   while(1)
   {
       P1OUT = BIT0;            // LED in P1.0 is turned on here
       __delay_cycles(100000);  // This creates a delay before next instruction allowing LED to stay on
       P1OUT = ~BIT0;           // LED in P1.0 is turned off here
       __delay_cycles(900000);  // This creates a delay before next instruction allowing LED to stay off
   }                            // The two delays are used to make a slow blink on LED
}
