/*
 ============================================================================
 Name        : Lab_9_To_Calculate_Polynomial_Value.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	float x, y;
	do {
		fflush(stdin);
		fflush(stdout);
		printf("\r\nEnter x value: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &x);
		y = 5 * x * x + 3 * x + 2;
		fflush(stdin);
		fflush(stdout);
		printf("\r\n y (%f) = %f", x, y);
		fflush(stdin);
		fflush(stdout);
		printf("\r\n do you want to evaluate again (y/n):");
		fflush(stdin);
		fflush(stdout);
	} while (getche() == 'y');
}
