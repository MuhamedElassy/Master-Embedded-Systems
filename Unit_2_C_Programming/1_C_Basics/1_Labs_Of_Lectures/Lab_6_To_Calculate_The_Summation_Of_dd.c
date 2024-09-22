/*
 ============================================================================
 Name        : Lab_6_To_Calculate_The_Summation_Of_Odd_Values_Between_1_And_99.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, Sum = 0, n, start;
    printf("Please Enter The Last Number : ");
    fflush(stdout);
    scanf("%d",&n);
    printf("Please Enter The Start Number : ");
    fflush(stdout);
    scanf("%d",&i);
    start=i;
    while(i<=n)
    {
        Sum += i;
        i+=2;
    }
    printf("Summation Of Odd Values Between %d And %d is : %d ", start, n, Sum );
    return 0;
}
