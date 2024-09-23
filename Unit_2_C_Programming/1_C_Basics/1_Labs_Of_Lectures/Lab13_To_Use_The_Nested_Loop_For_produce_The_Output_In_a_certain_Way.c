/*
 ============================================================================
 Name        : Lab13_To_Use_The_Nested_Loop_For_produce_The_Output_In_a_certain_Way.c
 Author      : Mohamed Elaasy
 Created on  : September 23, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for ( int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d ",j);
        }
        printf ("\n");
    }
    return 0;
}
