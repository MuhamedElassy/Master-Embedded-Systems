/*
 ============================================================================
 Name        : EX_1_Example_of_Multidimensional_Array_in_C.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    float a[2][2], b[2][2],c[2][2];
    printf("Enter The Elements of 1st Matrix\r\n");
    fflush(stdin);  fflush(stdout);
    for(i=0;i<=1;i++)
    {
        for(j=0 ; j<=1 ; j++)
        {
            printf("Enter a%d%d : ",i+1,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter The Elements of 2nd Matrix\r\n");
    fflush(stdin);  fflush(stdout);
    for(i=0;i<=1;i++)
    {
        for(j=0 ; j<=1 ; j++)
        {
            printf("Enter a%d%d : ",i+1,j+1);
            fflush(stdin);  fflush(stdout);
            scanf("%f",&b[i][j]);
        }
    }
    printf("Sum of Matrix : \r\n");
    fflush(stdin);  fflush(stdout);
    for(i=0;i<=1;i++)
    {
        for(j=0 ; j<=1 ; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%0.1f\t",c[i][j]);
            if(j==1)
            {
                printf("\r\n");
            }
        }
    }
    return 0;
}
