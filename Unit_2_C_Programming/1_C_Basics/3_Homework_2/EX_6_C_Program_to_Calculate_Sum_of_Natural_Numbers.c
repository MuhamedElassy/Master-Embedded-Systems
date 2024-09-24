/*
 ============================================================================
 Name        : EX_6_C_Program_to_Calculate_Sum_of_Natural_Numbers.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX6: C Program to Calculate Sum of Natural Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Sum=0,n;
    printf("Enter an Integer Number: ");
    fflush(stdout);
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        Sum += i;
    }
    printf("Sum = %d", Sum);
    return 0;
}
