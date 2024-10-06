/*
 ============================================================================
 Name        : Lab_5_Scanning_String_Value_by_Using_Scanf()_and_gets()_Function.c
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
    char text[100];
    printf("Enter Your Name : ");
    fflush(stdin); fflush(stdout);
    scanf("%s\r\n",text);
    printf("Your Name is %s \r\n",text);
    // Scanning String Value By Using gets() Function To Solve The Problems in printf()
    char x[100];
    printf("Enter Your Name Again : ");
    fflush(stdin); fflush(stdout);
    gets(x);
    printf("Your Name is %s \r\n",x);
    return 0; }
