/*
 ============================================================================
 Name        : 1_Assignment_Write_a_Program_That_Produces_The_Following_Output.c
 Author      : Mohamed Elassy
 Created on  : October 15, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Draw(Void)
{
    for (int i = 0; i<=9 ;i++)
    {
        for (int j=i;j<=9;j++)
        {
            printf("%d",j);
        }
        printf("\r\n");
    }
}
int main(void)
{
    Draw();
    return 0;
}
