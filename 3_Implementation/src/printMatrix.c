/**
 * @file printMatrix.c
 * @author RohanSingh (you@domain.com)
 * @brief print matrix function
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"

void printMatrix(){
	unsigned char i,j;
	for(i=0;i<3;i++){
		printf("\t\t\t");
		for(j=0;j<3;j++){
			printf("[%3c ]", mat[i][j]);
		}
		printf("\n");
	}
}
