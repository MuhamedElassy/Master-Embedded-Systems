/*
 ============================================================================
 Name        : EX_8_C_Program_to_Make_a_Simple_Calculator_to_Add_or_Subtract_or_Multiply_or_Divide_by_Using_switch_case_Statements.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ch;
    float x,y,z;
    printf("Enter operator either + or - or Divide : ");
    fflush(stdout);
    scanf("%c",&Ch);
    printf("Enter two operands: ");
    fflush(stdout);
    scanf("%f %f",&x,&y);
    switch(Ch)
    {
    case '-' :
        {
            z=x-y;
            printf("%0.1f - %0.1f = %0.1f",x,y,z);
        }
        break;
    case '+' :
        {
            z=x+y;
            printf("%0.1f + %0.1f = %0.1f",x,y,z);
        }
        break;
    case '*' :
        {
            z=x*y;
            printf("%0.1f * %0.1f = %0.1f",x,y,z);
        }
        break;
    case '/' :
        {
            z=x/y;
            printf("%0.1f / %0.1f = %0.1f",x,y,z);
        }
        break;
    default:
        {
            printf("Error!! You have entered an incorrect operator.");
        }
        break;
    }
    return 0;
}
