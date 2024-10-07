/*
 ============================================================================
 Name        : Lab_14_Converting_String_To_Integer_Value.c
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
    char text[20];
    int x;
    int y;
    int z;
    printf("Enter x : ");
    fflush(stdin); fflush(stdout);
    gets(text);
    x=atoi(text);
    printf("Enter y : ");
    fflush(stdin); fflush(stdout);
    gets(text);
    y=atoi(text);
    z = x + y;
    printf("%d",z);
    return 0;
}
