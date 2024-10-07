/*
 ============================================================================
 Name        : EX_3_C_Program_To_Find_Transpose_of_a_Matrix.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter Rows And Column Matrix : \r\n");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&n1,&n2);
    int a[n1][n2];
    printf("\r\nEnter Elements of Matrix : \r\n");
    for (int i=0 ; i< n1 ;i++)
    {
        for (int j=0 ; j<n2 ; j++)
        {
            printf("Enter Element a%d%d: ",i+1,j+1);
            flush(stdin); fflush(stdout);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\r\nEnter Matrix : \r\n");
    for (int i=0 ; i< n1 ;i++)
    {
        for (int j=0 ; j<n2 ; j++)
        {
            printf("%d\t",a[i][j]);
            if (j==2)
            {
                printf("\r\n");
            }
        }
    }
    printf("\r\nTranspose of Matrix : \r\n");
    for (int i=0 ; i< n2 ;i++)
    {
        for (int j=0 ; j<n1 ; j++)
        {
            printf("%d\t",a[j][i]);
            if (j==1)
            {
                printf("\r\n");
            }
        }
    }
    return 0;
}
