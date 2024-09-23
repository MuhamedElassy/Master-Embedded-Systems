/*
 ============================================================================
 Name        : EX_5_Write_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : Write C Program to Find ASCII Value of a Character in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	//Find ASCII Value of a Character
    char i;
    printf("Enter a character: ");
    fflush(stdout);
    scanf("%c",&i);
    fflush(stdout);
    printf("ASCII value of %c = %d",i,i);
	return 0;
}
