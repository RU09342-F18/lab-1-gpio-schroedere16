#include <msp430.h> 
#define BIT0 0x01;

/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1SEL &= ~BIT0;     //changes the P1SEL to zero
	P1SEL2 &= ~BIT0;    //changes the P2SEL to zero both need to be zero to allow the direction register to be selected
	P1DIR |= BIT0;      //changes the least significant bit to be one to make direction register go to output
	while(1)
	{
	    P1OUT ^= BIT0;  // changes the least significant bit of output to cyclle between 1 and 0 turning LED on and off
	    __delay_cycles(100000); //delays the light switching allowing it to be seen
	}
	return 0;
}
