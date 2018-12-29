/*
 * Interrupt.h
 *
 * Author: Engr.Mohammed Hessen
 */

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

/*------------------- Interrupt Registers-------------------------*/

enum MCUCR_Reg  { ISC00 , ISC01 , ISC10 , ISC11 , SM0 , SM1 , SM2 , SE } ;
enum MCUCSR_Reg { PORF , EXTRF , BORF , WDRF , JTRF , MCUCSR5_RESERVED , ISC2 , JTD };
enum GICR_Reg   { IVCE , IVSEL , GICR_RESERVED2 , GICR_RESERVED3 , GICR_RESERVED4 , INT2 , INT0 , INT1 };
enum GIFR_Reg   { GIFR_RESERVED=4 , INTF2 , INTF0 , INTF1  };
/*----------------------------------------------------------------*/
enum SREG_Reg   { C , Z , N , V , S , H , T , I };
/*________________________________________________________________*/


void DEI_Init (void) ;

#endif /* INTERRUPT_H_ */
