/*
 ============================================================================
 Name        : Lab_3_To_Calculate_The_Minimum_Of_Two_Numbers.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,d,Min,Max;
	// To Get The Minimum Number
	printf("Please Enter Two Numbers : \r\n");
	fflush(stdout);
	scanf("%f %f",&a, &b);
	fflush(stdout);
	Min=(a>=b)?b:a;
	printf("The Minimun Number is : %f",Min);
	// To Get The Maximum Number
        printf("\r\nPlease Enter Another Two Numbers : \r\n");
	fflush(stdout);
	scanf("%f %f",&c, &d);
	fflush(stdout);
	Max=(c>=d)?c:d;
	printf("The Maximum Number is : %f",Max);
	return 0;
}
