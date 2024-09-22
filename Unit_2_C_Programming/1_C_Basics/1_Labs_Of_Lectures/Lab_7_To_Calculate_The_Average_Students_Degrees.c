/*
 ============================================================================
 Name        : Lab_7_To_Calculate_The_Average_Students_Degrees.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Num_Stds,i=1;
    float Degree,Sum,Avg;
    printf("Please Enter The Number Of Students : ");
    fflush(stdout);
    scanf("%d",&Num_Stds);
    while(i<=Num_Stds)
    {
        printf("Enter The Degree Of Student ( %d ) : ",i);
        fflush(stdout);
        scanf("%f",&Degree);
        Sum += Degree;
        i++;
    }
    Avg=Sum/Num_Stds;
    printf("The Average Students Degree is : %f ",Avg);
    return 0;
}
