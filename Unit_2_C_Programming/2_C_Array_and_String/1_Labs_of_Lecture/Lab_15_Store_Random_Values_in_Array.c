/*
 ============================================================================
 Name        : Lab_15_Store_Random_Values_in_Array.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text[100];
    for(int i=0 ; i< sizeof(text) ;i++)
    {
        text[i]=rand();
    }
    printf("%s",text);
    return 0;
}
