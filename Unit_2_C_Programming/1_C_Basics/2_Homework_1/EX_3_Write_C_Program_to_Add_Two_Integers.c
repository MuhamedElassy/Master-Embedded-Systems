/*
 ============================================================================
 Name        : EX_3_Write_C_Program_to_Add_Two_Integers.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : Write C Program to Add Two Integers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,sum=0;
    printf("Enter two integers Numbers: ");
    fflush(stdout);
    scanf("%d %d",&x,&y);
    fflush(stdout);
    sum=x+y;
    printf("The Sum is : %d",sum);
	return 0;
}
