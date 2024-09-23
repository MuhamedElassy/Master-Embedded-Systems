/*
 ============================================================================
 Name        : Lab_11_To_Clarify_The_Function_Of_break_In_The_Code.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i<=10; i++)
    {
        if(i==5)break;
        printf("%d ",i);
    }
    printf("\r\nComing Out Of For Loop When i = %d",i);
    return 0;
}
