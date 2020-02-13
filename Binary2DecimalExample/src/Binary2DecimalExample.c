/*
 * Binary2DecimalExample.c
 *
 *  Created on: Feb 13, 2020
 *      Author: James.Westfall
 */

#include <stdio.h>

int Binary2Decimal(char * binary);

int main() {

	char * binaryStr[50];

	printf("Enter binary string: ");
   	scanf("%s", binaryStr);

   	printf("The decimal value is: %i",Binary2Decimal(binaryStr));

	return 0;
}

int Binary2Decimal(char * binary){

	int numBits = 0;
	int decimal = 0;

	while (binary[numBits] != "\0") numBits++;

	for (int i=0; i<numBits;i++){
		switch (binary[numBits-1-i]){
			"1": decimal += 2^i;
			"0": break;
			default:
				printf("Please only use 0 and 1 for inputs!\n");
				return -1;
		}
	}

	return decimal;
}
