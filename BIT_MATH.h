
#ifndef _BIT_MATH_H
#define _BIT_MATH_H

/* to control certain pin to make it high or low or to toggle it's value */

/* the shift steps is equal to the pin no, so we can create a pattern using macros like objects */


//#define SET_BIT(VAR,BITNO) (VAR) |=  (1 << (BITNO)) /*HIGH*/
//#define CLR_BIT(VAR,BITNO) (VAR) &= ~(1 << (BITNO)) /*LOW*/
//#define TOG_BIT(VAR,BITNO) (VAR) ^=  (1 << (BITNO)) /*TOGGLE*/
//#define GET_BIT(VAR,BITNO) (((VAR) >> (BITNO)) & 0x01)

#define SET_BIT(Reg,Pin) Reg |=  (1 << Pin)  /*HIGH*/
#define CLR_BIT(Reg,Pin) Reg &= ~(1 << Pin)  /*LOW*/
#define TOG_BIT(Reg,Pin) Reg ^=  (1 << Pin)  /*TOGGLE*/
#define GET_BIT(Reg,Pin) (((Reg)>>(Pin)) &1)


#endif



