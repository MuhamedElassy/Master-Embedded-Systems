/*
 ============================================================================
 Name        : EX_5_C_Program_to_Check_Whether_a_Character_is_an_Alphabet_or_not.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX5: C Program to Check Whether a Character is an Alphabet or not in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ch;
    int Num;
    printf("Enter a Character: ");
    fflush(stdout);
    scanf("%c",&Ch);
    Num=Ch;
    if((Num >= 65 && Num <= 90) || (Num >= 97 && Num <= 122))
    /*
        or We Can Use This Instruction
        if(Ch>='a'&&Ch<='z'||Ch>='A'&&Ch<='Z')
    */
    {
        printf("%c is an alphabet",Ch);
    }
    else
    {
        printf("%c is not an alphabet",Ch);

    }
    return 0;
}
