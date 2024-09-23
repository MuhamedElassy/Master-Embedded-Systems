/*
 ============================================================================
 Name        : Lab_10_To_Calculate_Polynomial_value_By_Use_goto_Statement.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float x, y;
    lebal_name:
        printf("\r\nPlease Enter The Value Of X : ");
        fflush(stdout);
        scanf("%f",&x);
        fflush(stdin);
        fflush(stdout);
        y=5*x*x+3*x+2;
        printf("y(%f) = %f \r\n",x,y);
        printf("If You Want To Evaluate Again Click Y,y || N,n : ");
        // This Way is Wrong Because The User can Input one Character only
        /*if (getche()=='y'||getche()=='Y')
            goto lebal_name;*/
            char ch = getche();
            if (ch == 'Y' || ch == 'y')
                goto lebal_name;
    return 0;
}
