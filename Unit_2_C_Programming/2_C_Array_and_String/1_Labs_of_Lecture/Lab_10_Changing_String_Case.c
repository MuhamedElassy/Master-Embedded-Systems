/*
 ============================================================================
 Name        : Lab_10_Changing_String_Case.c
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
    strupr(x);
    strlwr(y);
    printf("%s \r\n%s",x,y);
    return 0;
}
