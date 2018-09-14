/*  Author: Eric Schroeder
    Created: September 13, 2018
    Last updated: September 14, 2018 */

#include <msp430.h>                 //library for msp430 microcontrollers

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1SEL &= ~(BIT0);               //sets P1SEL to be zero allowing P1DIR can be directed through mux
    P4SEL &= ~(BIT7);               //sets P4SEL to be zero allowing P4DIR can be directed through mux
    P1DIR |= BIT0;                  //sets P1DIR to read outputs
    P4DIR |= BIT7;                  //sets P4DIR to read outputs
    P1OUT |= BIT0;                  //Sets LED in P1.0 to on
    P4OUT &= ~BIT7;                 //Sets LED in P4.7 to off
    while (1)                       //loop that continues instructions to blink LEDS forever
    {
        unsigned int i, k;          //two variables used to determine when each LED should be on
        i++;                        //incrementing the variable that controls LED in P1.0
        k++;                        //incrementing the variable that controls LED in P4.7
        if(i > 5000){               //checking if first variable has reached high enough value from incrementing to turn on first LED
            i = 0;                  //resets first variable to begin incrementing so it can turn LED on again
            P1OUT ^= BIT0;          //Turns on the LED for P1.0
        }
        if (k > 60000) {            //checking if second variable has reached high enough value from incrementing to turn on second LED
            k = 0;                  //resets second variable to begin incrementing so it can turn LED on again
            P4OUT ^= BIT7;          //Turns on the LED for P4.7
        }
    }
    return 0;
}
