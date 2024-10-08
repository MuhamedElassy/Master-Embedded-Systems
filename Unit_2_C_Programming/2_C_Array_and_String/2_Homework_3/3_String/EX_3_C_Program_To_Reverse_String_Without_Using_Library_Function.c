/*
 ============================================================================
 Name        : EX_3_C_Program_To_Reverse_String_Without_Using_Library_Function.c
 Author      : Mohamed Elassy
 Created on  : October 8, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j = 0;
    printf("\nEnter the string : ");
    fflush(stdin); fflush(stdout);
    gets(str);

    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("\nReverse string is : %s", str);
    return (0);
}
