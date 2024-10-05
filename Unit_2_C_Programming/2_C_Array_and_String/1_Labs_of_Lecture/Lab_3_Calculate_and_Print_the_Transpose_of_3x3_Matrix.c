/*
 ============================================================================
 Name        : Lab_3_Calculate_and_Print_the_Transpose_of_3x3_Matrix.c
 Author      : Mohamed Elassy
 Created on  : October 5, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float Matrix[3][3];
    for (int i=0 ; i<=2 ; i++)
    {
        for(int j=0 ; j<=2 ; j++)
        {
            printf("Enter the item ( %d , %d ) : ",i,j);
            fflush(stdout);
            scanf("%f",&Matrix[i][j]);
        }
    }
    printf("The Matrix is \r\n");
    for (int i=0 ; i<=2 ; i++)
    {
        for(int j=0 ; j<=2 ; j++)
        {
            printf("%0.2f  ",Matrix[i][j]);
        }
        printf("\r\n\r\n");
    }
    printf("The Transpose Matrix is \r\n");
    for (int i=0 ; i<=2 ; i++)
    {
        for(int j=0 ; j<=2 ; j++)
        {
            printf("%0.2f  ",Matrix[j][i]);
        }
        printf("\r\n\r\n");
    }  return 0;  }
