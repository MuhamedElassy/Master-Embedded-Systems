/*
 ============================================================================
 Name        : EX_4_Write_C_Program_to_Multiply_two_Floating_Point_Numbers.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : Write C Program to Multiply two Floating Point Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float x,y,sum;
    printf("Enter two numbers: ");
    fflush(stdout);
    scanf("%f %f",&x,&y);
    fflush(stdout);
    sum=x*y;
    printf("Product: %f",sum);
	return 0;
}
