/*
Author: Grace Gibson
Date Created: 8/31/2021
Purpose: The library of binary utility commands.
*/

//header files to include in project header file (outside header guards)
#include <stdint.h>
#include <stdio.h>
#include <math.h>

#ifndef MINIPROJECT0 
#define MINIPROJECT0
/*
setbit takes one address to a 32-bit number to set one bit based on which bit selected.
addr is a uint32_t pointer that stores the address to a 32-bit integer number.
whichbit is a uint8_t variable that stores an 8-bit integer number value that is used to select the bit to set to 1.
setbit does not return anything because the function sets the bit of a value pointed to by the addr.
*/
void setbit(uint32_t* addr, uint8_t whichbit);

/*
clearbit takes one address to a 32-bit number to clear one bit to zero based on which bit selected.
addr is a uint32_t pointer that stores the address to a 32-bit integer number.
whichbit is a uint8_t variable that stores an 8-bit integer number value that is used to select the bit to clear to 0.
clearbit does not return anything because the function clear the bit of a value pointed to by the addr.
*/
void clearbit(uint32_t* addr, uint8_t whichbit);

/*
setbits sets multiple bits based on the bitmask.
addr is a uint32_t pointer that stores the address to a 32-bit integer number.
bitmask is a uint32_t variable that stores a 32-bit integer number value that has 1s in bit locations to set to 1 in the value pointed to by addr.
setbits does not return anything because the function uses an address to set the bits of the value it points to.
*/
void setbits(uint32_t* addr, uint32_t bitmask);

/*
clearbits clears multiple bits based on the bitmask.
addr is a uint32_t pointer that stores the address to a 32-bit integer number.
bitmask is a uint32_t variable that stores a 32-bit integer number value that has 1s in bit locations to clear to 0 in the value pointed to by addr.
setbits does not return anything because the function uses an address to clear the bits of the value it points to.
*/
void clearbits(uint32_t* addr, uint32_t bitmask);

/*
display_binary displays the argument num in binary.
num is a uint32_t variable that stores a 32-bit integer value.
display_bits does not return anything because it prints the 32 bits of num.
*/
void display_binary(uint32_t num);

#endif
