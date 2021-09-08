//Function definitions for setbit, clearbit, setbits, clearbits, and display_binary from the binaryutils header file. 
#include "ggibson_binaryutils.h"

void setbit(uint32_t* addr, uint8_t whichbit) {
	//shift 1 to location of whichbit to set
	*addr = (1 << whichbit) | *addr; //use bitwise OR to set to 1 
}


void clearbit(uint32_t* addr, uint8_t whichbit) {
	//move 1 to location of whichbit to clear
	*addr = ~(1 << whichbit) & *addr; //negate all locations of 1 to 0 to clear with bitwise AND
}


void setbits(uint32_t* addr, uint32_t bitmask) {
	*addr = *addr | bitmask; //same as setbit but with bitmask
}


void clearbits(uint32_t* addr, uint32_t bitmask) {
	*addr = *addr & ~bitmask; //same as clearbit but with bitmask
}


void display_binary(uint32_t num) {


	uint32_t compareTmp = 2147483648; //31st bit is set to 1, rest is 0
	int i = 0;
	while (i < 32) { //go through all 32 bits
		if ((compareTmp & num) == compareTmp) { //compare the 1 bit location to num
			printf("1"); //if the 1 bit location has a 1 in num then print 1 
		}
		else { 
			printf("0");
		}
		compareTmp = compareTmp >> 1; //shift the 1 to the right to compare the next bit of num
		i++; //move to next bit from 31st bit to the 0th bit
	}
}
