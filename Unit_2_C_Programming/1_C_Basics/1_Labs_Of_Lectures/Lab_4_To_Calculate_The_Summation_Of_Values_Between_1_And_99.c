/*
 ============================================================================
 Name        : Lab_4_To_Calculate_The_Summation_Of_Values_Between_1_And_99.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int Sum=0;
    for(int i=1;i<=99;i++)
    {
        Sum+=i;
    }
            printf("Summation Of Values Between ( 1 To 99 ) is : %d ",Sum);

	return 0;
}
