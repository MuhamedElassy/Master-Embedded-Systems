/*
 ============================================================================
 Name        : 1_Assignment_To_Make_the_Numbers_as_Inverted_Pyramid_Right_Angled_Triangle_Pattern.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : Assignment To Make the Numbers as Inverted Pyramid Right-Angled Triangle Pattern By Using For Nested Loop in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=i;j<=9;j++)
        {
            printf("%d ",j);
        }
        printf("\r\n");
    }
    return 0;
}
