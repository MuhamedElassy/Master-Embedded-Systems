/*
 ============================================================================
 Name        : Lab_11_Changing_String_Case_Without_Using_Any_Function.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x[20]={"Mohamed"};
    char y[20]={"Elassy"};
    char a='a';
    char A='A';
    int d;
    d = a - A;
    // Make All Letters Capital...
    for (int i=0; i<strlen(x) ; i++ )
    {
        if( 'z' >= x[i] && x[i] >= 'a' )
        {
            x[i]=x[i]-d;
        }
    }
    printf("%s\r\n",x);
    // Make All Letters Small...
    for (int i=0; i<strlen(y) ; i++ )
    {
        if( 'Z' >= y[i] && y[i] >= 'A' )
        {
            y[i]=y[i]+d;
        }
    }
    printf("%s",y);
    return 0;
}
