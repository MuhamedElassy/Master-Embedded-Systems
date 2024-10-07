/*
 ============================================================================
 Name        : Example_of_Continue_Statement.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int Num,Sum=1;
    for (int i=1 ; i<=4 ; i++)
    {
        printf("Enter Num%d : ",i);
        fflush(stdin);  fflush(stdout);
        scanf("%d",&Num);
        if (Num==0)
            continue;
        Sum *= Num ;
    }
    printf("product = %d",Sum);
    return 0;
}
