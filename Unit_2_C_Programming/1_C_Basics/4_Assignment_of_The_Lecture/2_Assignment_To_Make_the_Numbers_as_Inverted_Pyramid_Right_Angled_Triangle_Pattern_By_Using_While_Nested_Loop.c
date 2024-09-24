/*
 ============================================================================
 Name        : 2_Assignment_To_Make_the_Numbers_as_Inverted_Pyramid_Right_Angled_Triangle_Pattern_By_Using_While_Nested_Loop.c
 Author      : Mohamed Elassy
 Created on  : September 24, 2024
 Description : Assignment To Make the Numbers as Inverted Pyramid Right-Angled Triangle Pattern By Using While Nested Loop in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    while (i<=9)
    {
        int j=i;
        while(j<=9)
        {
            printf("%d ",j);
            j++;
        }
        printf("\r\n");
        i++;
    }
    return 0;
}
