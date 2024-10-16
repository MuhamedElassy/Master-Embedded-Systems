/*
 ============================================================================
 Name        : EX_3_Write_C_Program_To_Reverse_a_Sentance_By_Using_Recursion.c
 Author      : Mohamed Elassy
 Created on  : October 16, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse_Sentence(char text[], int Size)
{
    char Reverse[100];
    int j = 0;
    for (int i = strlen(text) - 1; i >= 0; i--)
    {
        Reverse[j++] = text[i];
    }
    Reverse[j] = '\0';
    printf("Reversed Sentence: %s\n", Reverse);
}
int main()
{
    char Sent[100];
    printf("Enter a Sentence: ");
    fflush(stdin);
    fflush(stdout);
    gets(Sent);
    Reverse_Sentence(Sent,100);
    return 0;
}
