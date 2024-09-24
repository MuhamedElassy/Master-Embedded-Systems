/*
 ============================================================================
 Name        : EX_4_C_Program_to_Check_Whether_a_Number_is_Positive_or_Negative.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX4: C Program to Check Whether a Number is Positive or Negative in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter a Number: ");
    fflush(stdout);
    scanf("%f",&x);
    if(x>0)
    {
        printf("%0.2f is Positive.",x);
    }
    else if (x<0)
    {
      printf("%0.2f is Negative.",x);
    }
    else
    {
        printf("You Entered Zero");
    }
    return 0;
}
