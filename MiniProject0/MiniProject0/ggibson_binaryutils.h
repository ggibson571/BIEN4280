/*
Author: Grace Gibson
Date Created: 8/31/2021
Purpose: The library of binary utility commands.
*/

//header files to include in project header file (outside header guards)
#include <stdint.h>
#include <stdio.h>

#ifndef MINIPROJECT0 
#define MINIPROJECT0

void setbit(uint32_t* addr, uint8_t whichbit);

void clearbit(uint32_t* addr, uint8_t whichbit);

void setbits(uint32_t* addr, uint32_t bitmask);

void clearbits(uint32_t* addr, uint32_t bitmask);

void display_binary(uint32_t num);

#endif
