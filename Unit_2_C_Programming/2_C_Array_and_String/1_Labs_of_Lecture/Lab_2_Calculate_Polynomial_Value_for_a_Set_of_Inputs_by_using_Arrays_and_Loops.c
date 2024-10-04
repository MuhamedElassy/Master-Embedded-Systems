/*
 ============================================================================
 Name        : Lab_2_Calculate_Polynomial_Value_for_a_Set_of_Inputs_by_using_Arrays_and_Loops.c
 Author      : Mohamed Elassy
 Created on  : October 5, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x[5]={5,16,22,3.5,15};
    float y;
    for (int i=0;i<=4;i++)
    {
        y=5*x[i]*x[i]+3*x[i]+2;
        printf("y(%f) = %f \r\n",x[i],y);
    }
    return 0;
}
