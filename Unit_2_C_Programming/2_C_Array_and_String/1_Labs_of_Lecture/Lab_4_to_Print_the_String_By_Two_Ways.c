/*
 ============================================================================
 Name        : Lab_4_to_Print_the_String_By_Two_Ways.c
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
    char x[8]={'H','e',0,'l','l',0,'o',0};
    printf("%s\n",x);
    printf("%s\n",&x[0]);
    printf("%s\n",&x[1]);
    printf("%s\n",&x[3]);
    printf("%s\n",&x[4]);
    printf("%s\n",&x[6]);
    // Interview question : Write a code that Works instead of %s
    for (int i=0; i<sizeof(x)&&x[i]!=0; i++)
    {
        printf("%c",x[i]);
    }
    /* In This Code, All item inside The Array
    will be printed regardless of the Null That Exists..
    */
    printf("\n");
        for (int i=0; i<sizeof(x); i++)
    {
        printf("%c",x[i]);
    }
    return 0;
}
