/*
 ============================================================================
 Name        : Lab_1_Calculate_the_Factorial_by_Using.c
 Author      : Mohamed Elassy
 Created on  : October 12, 2024
 Description : Write a program uses a function to calculate the factorial of any positive number in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int Num)
    {
        int sum=1;
        for(int i=1 ; i <= Num ; i++)
        {
            sum = sum * i;
        }
         return sum;
    }
int main()
{
        printf("Factorial ( 10 ) = %d\r\n",fact(10));
        printf("Factorial ( 0 ) = %d\r\n",fact(0));
        printf("Factorial ( 5 ) = %d",fact(5));

    return 0;
}
