/*  Author: Eric Schroeder
    Created: September 13, 2018
    Last updated: September , 2018 */

#include <msp430.h>             //Library for msp430 microcontrollers

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    P1SEL = ~BIT0;              //changes P1SEL to zero which allows P1DIR and P1OUT to be selected
    P1DIR = BIT0;              //changes least significant bit to 1 to make direction register go to output
    while(1)                    //to continue to loop of turning LED on and off forever
    {
        P1OUT ^= BIT0;          //changes least significant bit between 1 and 0 turning LED on and off
        __delay_cycles(100000); //delays the time between LED blinks to allow the light to be seen
    }
}
