/*  Author: Eric Schroeder
    Created: September 13, 2018
    Last updated: September 13, 2018*/

#include <msp430.h>                     //library for msp430 microcontrollers

int main(void)
{
    int value = 0;
    WDTCTL = WDTPW | WDTHOLD;           // stop watchdog timer
    P1SEL &= ~(BIT0 + BIT6);            //sets P1SEL to zero for BIT0 and BIT6
    P1SEL2 &= ~(BIT0 + BIT6);           //sets P1SEL2 to zero for BIT0 and BIT6 these are zero so the P1DIR can be directed through a mux
    P1DIR |= (BIT0 + BIT6);             //sets P1DIR to P1.0 and P1.6 which controls both LEDs
    P1OUT |= BIT0;                      //sets LED on P1.0 to be on initally
    P1OUT &= ~BIT6;                     //sets LED on P1.6 to be off initially
    while (1)                           //Loop that loops instructions to blink LEDs forever
    {
        volatile unsigned int i, k;     //two variables used to determine when each LED should be on
        i++;                            //incrementing the variable that controls LED in P1.0
        k++;                            //incrementing the variable that controls LED in P1.6
        if(i>5000)                      //checking if first variable has reached high enough value from incrementing to turn on first LED
        {
            i=0;                        //resets first variable to begin incrementing so it can turn LED on again
            P1OUT ^= BIT0;              //Turns on LED for P1.0
        }
        if (k>20000) {                  //checking if first variable has reached high enough value from incrementing to turn on second LED
            k=0;                        //resets second variable to being incrementing so it can turn LEd on again
            P1OUT ^= BIT6;              //Turns on Led for P1.6
        }
    }
    return 0;
}
