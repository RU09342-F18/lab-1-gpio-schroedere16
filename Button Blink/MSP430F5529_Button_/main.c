/*  Author: Eric Schroeder
    Created: September 14, 2018
    Last updated: September 14, 2018 */


#include <msp430.h>                     //library for msp430 microcontrollers

void main(void)
{
    unsigned int i;                     //variable used to delay between LED blinks
    WDTCTL = WDTPW | WDTHOLD;           // Stop watchdog timer
    P1REN |= BIT1;                      // Enable resistor on P1.1 allowing the button input to be read
    P1OUT = BIT1;                       // Set P1.1 as input
    P1DIR = BIT0;                       // Set P1.0 as output
    P4OUT = BIT7;                       // Sets P4.7 to be an output
    while(1)                            //loop that continues instructions forever
    {
        if( !(P1IN & BIT1) )            //Checks if the button is pressed
        {
            P1OUT ^= BIT0;              //Toggle LED signal if button was pressed

            for( i=0; i<30000; i++ );   //delay allowing the button input to be read
        }
  }
}
