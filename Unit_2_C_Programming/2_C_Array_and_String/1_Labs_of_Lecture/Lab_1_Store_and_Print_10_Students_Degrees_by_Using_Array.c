/*
 ============================================================================
 Name        : Lab_1_Store_and_Print_10_Students_Degrees_by_Using_Array.c
 Author      : Mohamed Elassy
 Created on  : October 5, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float degrees[9];
    for(int i=0;i<=9;i++)
    {
        printf("Enter student %d degree : ",(i+1));
        fflush(stdin);
        fflush(stdout);
        scanf("%f",&degrees[i]);
        fflush(stdout);
        fflush(stdin);
        printf("\n");
    }
    for(int i=0;i<=9;i++)
    {
        printf("Student %d degree is %f \n",(i+1),degrees[i]);
    }
    return 0;
}
