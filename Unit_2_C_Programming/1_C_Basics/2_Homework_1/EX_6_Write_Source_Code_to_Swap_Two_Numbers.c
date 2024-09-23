/*
 ============================================================================
 Name        : EX_6_Write_Source_Code_to_Swap_Two_Numbers.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : Write Source Code to Swap Two Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a,b,c;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%f",&a);
    fflush(stdout);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%f",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping, value of a = %0.2f\n",a);
    printf("After swapping, value of b = %0.2f\n",b);
	return 0;
}
