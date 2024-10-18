/*
 ============================================================================
 Name        : EX_3_Write_C_Program_To_Reverse_a_Sentance_By_Using_Recursion_and_Without_Using_String.c
 Author      : Mohamed Elassy
 Created on  : October 18, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reverse();
int main()
{
    printf("Enter a Sentence: ");
    fflush(stdin);  fflush(stdout);
    Reverse();
    return 0;
}
void Reverse()
{
    char c;
    scanf("%c",&c);
    if (c!='\n')
    {
        Reverse();
        printf("%c",c);
    }
}
