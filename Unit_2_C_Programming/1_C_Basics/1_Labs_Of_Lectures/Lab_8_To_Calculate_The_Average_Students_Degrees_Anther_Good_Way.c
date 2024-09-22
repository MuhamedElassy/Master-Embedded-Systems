/*
 ============================================================================
 Name        : Lab_8_To_Calculate_The_Average_Students_Degrees_Anther_Good_Way.c
 Author      : Mohamed Elassy
 Created on  : September 22, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int nStudents;

int main(void)

{
	int nStudents=0;
    float degree, sum = 0;
    printf("Enter negative value to exit:\r\n");
    fflush(stdin);
    fflush(stdout);
    while (1)
    {
        printf ("Enter student (%d) degree:", nStudents + 1);
        fflush(stdout);
        scanf("%f", &degree);
        fflush(stdin);
        fflush(stdout);
        if (degree<0) break; //force exit from while loop
        sum += degree;
        nStudents++;
    }
    printf ("Average students degree is: %f\r\n", sum/nStudents);
}
