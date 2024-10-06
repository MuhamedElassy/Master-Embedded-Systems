/*
 ============================================================================
 Name        : Lab_7_Copy_String_to_String.c
 Author      : Mohamed Elassy
 Created on  : October 6, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x[20]={"Ahmed Hossam"};
    char y[20];
    int i = 0;
    while(x[i]!=0)
    {
        y[i]=x[i];
        i++;
    }
    y[i]=0;  // Add Null Termination to the End of B
    printf("%s",y);
    return 0;
}
