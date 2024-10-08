/*
 ============================================================================
 Name        : EX_1_C_Program_To_Find_The_Frequency_of_Characters_in_a_String.c
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
    char x[100],element;
    int count=0;
    printf("Enter a String : ");
    fflush(stdin);  fflush(stdout);
    //scanf("%s",x);
    gets(x);
    printf("Enter a Character to find Frequency: ");
    fflush(stdin);  fflush(stdout);
    scanf("%c",&element);
    for (int i=0 ; i<=strlen(x) ; i++)
    {
        if(x[i]==element)
        {
            count++;
        }
    }
    printf("Frequency of %c = %d",element,count);
    return 0;
}
