/*
 ============================================================================
 Name        : EX_2_C_Program_To_Find_The_Length_of_a_String.c
 Author      : Mohamed Elassy
 Created on  : October 8, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i=0;
    char senst[1000];
    printf("Enter a String : ");
    fflush(stdin);  fflush(stdout);
    //scanf("%s",senst);
    gets(senst);
    while(senst[i]!=0)
    {
        i++;
    }
    printf("Length of String : %d",i);
    return 0;
}
