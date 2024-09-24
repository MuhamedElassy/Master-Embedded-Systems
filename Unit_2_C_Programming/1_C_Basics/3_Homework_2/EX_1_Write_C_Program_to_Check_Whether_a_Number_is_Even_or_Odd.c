/*
 ============================================================================
 Name        : EX_1_Write_C_Program_to_Check_Whether_a_Number_is_Even_or_Odd.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX1: Write C Program to Check Whether a Number is Even or Odd in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float num;
    printf("Enter an integer you want to check: ");
    fflush(stdout);
    scanf("%d",&x);
    num = x%2;
    if (x%2==1)
    {
      printf("%d is odd.",x);
    }
    else
    {
        printf("%d is even.",x);
    }
    printf("\r\nReminder is : %f",num);
    return 0;
}
