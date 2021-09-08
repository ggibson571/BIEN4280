//Program to test the implementation of the functions of binary utils. 

#include "ggibson_binaryutils.h"


int main() {
	uint32_t solo = 0;
	//comments are to see the results of each function for debugging
	setbit(&solo, 24);
	//display_binary(solo);
	//printf("\n");
	setbit(&solo, 16);
	//display_binary(solo);
	//printf("\n");
	setbit(&solo, 17);
	//display_binary(solo);
	//printf("\n");
	setbits(&solo, 4095); //set 0-11th bits
	//display_binary(solo);
	//printf("\n");
	clearbit(&solo, 11);
	//display_binary(solo);
	//printf("\n");
	clearbits(&solo, 240); //clear 4th-7th bits
	printf("Binary Solo:\n\r");
	display_binary(solo);
	
	return(0);
}