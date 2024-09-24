/*
 ============================================================================
 Name        : EX_2_C_Program_to_Check_Vowel_or_Consonant.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : EX2: C Program to Check Vowel or Consonant in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    fflush(stdout);
    scanf("%c",&ch);
    if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("%c is a Vowel.",ch);
    }
    else
    {
        printf("%c is a Consonant.",ch);
    }
    return 0;
}
