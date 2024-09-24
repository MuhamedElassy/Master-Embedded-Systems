/*
 ============================================================================
 Name        : EX_7_C_Program_to_Find_Factorial_of_a_Number.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX7: C Program to Find Factorial of a Number in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Sum=1,n;
    printf("Enter an Integer Number: ");
    fflush(stdout);
    scanf("%d",&n);
    if(n>=0)
    {
        for (int i=1; i<=n; i++)
        {
            Sum *= i;
        }
        printf("Factorial = %d",Sum);
    }
    else
    {
        printf("Error!!! Factorial of negative number doesn't exist.");
    }
    return 0;
}
