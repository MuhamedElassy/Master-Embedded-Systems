/*
 ============================================================================
 Name        : EX_3_C_Program_to_Find_the_Largest_Number_Among_Three_Numbers.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX3:C Program to Find the Largest Number Among Three Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Enter Three Numbers: ");
    fflush(stdout);
    scanf("%f %f %f",&x,&y,&z);
    if(x>=y)
    {
        if(x>=z)
        {
            printf("Largest Number is: %0.2f",x);
        }
        else
        {
           printf("Largest Number is: %0.2f",z);
        }
    }
    else
    {
        if(y>=z)
        {
            printf("Largest Number is: %0.2f",y);
        }
        else
        {
            printf("Largest Number is: %0.2f",z);
        }
    }
    return 0;
}
