/*
 ============================================================================
 Name        : Lab_12_Finding_The_String_Length_without_any_function.c
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
    int i=0;
    char name[]={"Mohamed Mamon Elassy"};
    while (name[i]!=0)
    {
        i++;
    }
    printf("%d\r\n",i);
    printf("%d",strlen(name));
    return 0;
}
