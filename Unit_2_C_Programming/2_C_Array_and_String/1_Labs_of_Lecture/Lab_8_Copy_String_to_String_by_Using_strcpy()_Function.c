/*
 ============================================================================
 Name        : Lab_8_Copy_String_to_String_by_Using_strcpy()_Function.c
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
    char x[20]={"Ahmed Hossam"};
    char y[20];
    strcpy(y,x);
    printf("%s",y);
    return 0;
}
