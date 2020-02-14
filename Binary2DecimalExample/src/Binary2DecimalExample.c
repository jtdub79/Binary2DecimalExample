/*
 * Binary2DecimalExample.c
 *
 *  Created on: Feb 13, 2020
 *      Author: James Westfall
 */

#include <stdio.h>

#include <string.h>
#include <math.h>

int Binary2Decimal(char * binary);

int main() {

	char binaryStr[50];

	printf("Enter binary string: \n");
	fflush(stdout);
   	scanf("%s", binaryStr);

   	printf("The decimal value is: %i\n",Binary2Decimal(binaryStr));

	return 0;
}

int Binary2Decimal(char * binary){

	size_t numBits = strlen(binary);
	int decimal = 0;

	//while (strcmp(binary+numBits,"\0")) numBits++;

	for (unsigned int i=0; i<numBits;i++){

		switch(binary[numBits-1-i]){
			case '1' :
				decimal += pow(2,i);
				break;
			case '0' : break;
			default :
				printf("Please only use 0 and 1 for inputs!\n");
				return -1;
		} // switch

	} // for

	return decimal;
}
