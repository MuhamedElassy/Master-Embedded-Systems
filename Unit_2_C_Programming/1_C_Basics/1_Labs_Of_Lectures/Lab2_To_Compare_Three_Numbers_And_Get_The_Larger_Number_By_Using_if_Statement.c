/*
 ============================================================================
 Name        : Lab_2_To_Compare_Three_Numbers_And_Get_The_Larger_Number.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a,b,c;
    printf("Please Enter There Number To Compare Them \r\n");
    fflush(stdin);
    fflush(stdout);
    scanf("%f %f %f",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("The Larger Number is : %f",a);
        }
        else
        {
            printf("The Larger Number is : %f",c);

        }
    }
    else
    {
       if(b>=c)
       {
           printf("The Larger Number is : %f",b);
       }
       else
       {
           printf("The Larger Number is : %f",c);

       }
    }
    return 0;
}
