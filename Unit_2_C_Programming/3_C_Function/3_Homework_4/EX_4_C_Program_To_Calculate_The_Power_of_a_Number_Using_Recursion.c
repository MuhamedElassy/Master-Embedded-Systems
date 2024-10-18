/*
 ============================================================================
 Name        : EX_4_C_Program_To_Calculate_The_Power_of_a_Number_Using_Recursion.c
 Author      : Mohamed Elassy
 Created on  : October 18, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Power(int Bass, int power);
int main()
{
    int x, y;
    printf("Enter Bass Number: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &x);
    printf("Enter Power Number (Positive Integer): ");
    scanf("%d", &y);
    int result = Power(x, y);
    printf("%d^%d = %d\n", x, y, result);
    return 0;
}
int Power(int Bass, int power)
{
    if (power == 0)
        return 1;
    else
        return Bass * Power(Bass, power - 1);
}
