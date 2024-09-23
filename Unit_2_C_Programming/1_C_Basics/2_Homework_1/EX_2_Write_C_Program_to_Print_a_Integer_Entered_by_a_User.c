/*
 ============================================================================
 Name        : EX_2_Write_C_Program_to_Print_a_Integer_Entered_by_a_User.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : Write C Program to Print a Integer Entered by a User in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &i);
	fflush(stdout);
	printf("You entered: %d", i);
	return 0;
}
