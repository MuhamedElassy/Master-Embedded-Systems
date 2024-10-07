/*
 ============================================================================
 Name        : EX_2_C_Program_To_Calculate_Average_Using_Array.c
 Author      : Mohamed Elassy
 Created on  : October 7, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float Sum,avg;
    printf("Enter The Number of Date : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);
    float num[n];
    for(i=0 ; i<n ; i++)
    {
        printf("%d. Enter Number: ",i+1);
        fflush(stdin);  fflush(stdout);
        scanf("%f",&num[i]);
        Sum += num[i];
    }
    avg = Sum / i;
    printf("Average is %0.2f",avg);
    return 0;
}
