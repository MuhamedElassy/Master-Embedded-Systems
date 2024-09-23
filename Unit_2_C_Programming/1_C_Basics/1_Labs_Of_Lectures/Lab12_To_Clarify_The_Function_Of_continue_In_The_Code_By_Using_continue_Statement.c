/*
 ============================================================================
 Name        : Lab_12_To_Clarify_The_Function_Of_continue_In_The_Code.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i = 1; i<=10; i++)
    {
        if(i==5||i==6)
        {
            printf("\r\nSkipping %d From Display Using continue Statement\r\n",i);
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}
