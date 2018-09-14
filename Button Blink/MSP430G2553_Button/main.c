/*  Author Eric Schroeder
    Written September 12, 2018
    Last updated September 12, 2018 */


#include  <msp430.h>    //library for msp430 Microcontrollers

void main(void)
{
        int value = 0;                          // used to check is the button is pressed later
        WDTCTL = WDTPW + WDTHOLD;               // Stop watchdog timer
        P1OUT &= ~BIT6;                         // Set the LED to be off
        P1DIR &= ~BIT3;                         // Set Port 1 P1.3 as input (button)
        P1DIR |= BIT6;                          // Set P1.6 to output direction (LED)
        P1SEL &= ~(BIT3 | BIT6);                // Select Port 1 P1.3 (push button)
        while(1)
        {
            value = P1IN & BIT3;                //check if the button is pressed
                if( value == 0)                 // Push button down when bit 3 == 0
                        P1OUT |= BIT6;          // Turn LED on if button pressed
                else
                        P1OUT &= ~BIT6;         // Turn LED off if button not pressed
        }
        return 0;
}
