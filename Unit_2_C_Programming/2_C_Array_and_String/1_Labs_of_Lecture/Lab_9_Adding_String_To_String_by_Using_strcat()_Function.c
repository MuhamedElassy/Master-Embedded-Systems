/*
 ============================================================================
 Name        : Lab_9_Adding_String_To_String_by_Using_strcat()_Function.c
 Author      : Mohamed Elassy
 Created on  : October 6, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[20]={"Mohamed"};
    char y[20]={"Elassy"};
    strcat(x," ");
    strcat(x,y);
    printf("%s",x);
    return 0;
}
