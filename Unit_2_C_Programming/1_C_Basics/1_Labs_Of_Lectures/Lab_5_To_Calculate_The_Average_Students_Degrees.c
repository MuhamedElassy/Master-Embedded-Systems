/*
 ============================================================================
 Name        : Lab_5_To_Calculate_The_Average_Students_Degrees.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int Num_Stds;
    float Avrg = 0,Degree,Sum=0;
    printf("Please Enter The Number Of Students : ");
    fflush(stdout);
    scanf("%d",&Num_Stds);
    for(int i=1; i <= Num_Stds; i++)
    {
        printf("Enter Student ( %d ) Degree : ",i);
        fflush(stdout);
        scanf("%f",&Degree);
        Sum+=Degree;
    }
    Avrg=Sum/Num_Stds;
    printf("The Average Students Degree is : %f" ,Avrg);
    return 0;
}
