/*
 * Interrupt.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: DR . radwa hussein
 */

#include "Types.h"
#include "Registers.h"
#include "DIO.h"
#include "Interrupt.h"
#define SetBit(Register,Pin) Register|=(1<<Pin)
#define ClrBit(Register,Pin) Register&=(~(1<<Pin))
#define get_bit(Register,Pin) ((Register >> Pin) & 1)


void DEI_Init (void)
{
	/*Function to Enabling the Digital External Interrupt Number-0*/

	SREG  |= (1<<I);											/* General Interrupt Enable " Developer " */
	GICR  |= (1<<INT0);											/* Peripheral Interrupt Enable " Developer " */
	MCUCR  = ( (1<<ISC00) | (1<<ISC01) );						/* Peripheral Interrupt Flag " Peripheral " */

}

void __vector_1 (void) __attribute__((signal,__INTR__ATTRS));	//the second line  __atrrribte__...... tells the Linker that previous function is not  normal one and  it's address refers to Vector table Address
void __vector_1 (void)
{
	/*A sample function to Execute in case of Accessing the DEI Num-0*/
	DIO_vidSetBitValue( port_D , pin_0 , HIGH );
}
