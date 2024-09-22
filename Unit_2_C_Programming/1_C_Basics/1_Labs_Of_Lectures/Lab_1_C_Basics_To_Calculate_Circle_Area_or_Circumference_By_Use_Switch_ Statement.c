/*
 ============================================================================
 Name        : Lab_1_C_Basics_To_Calculate_Circle_Area_or_Circumference_By_Use_Switch_.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Radius, Area, Circumference;
	char Choise;
	printf("Please Enter The Radius : ");
	fflush(stdout);
	scanf("%f",&Radius);
	fflush(stdin);
	printf("If You The Area Of Circle Click 'a||A' And If You The Circumference Of Circle Click 'c||C' ");
	fflush(stdout);
	scanf("%c",&Choise);
	switch(Choise)
	{
    case 'a':
    case 'A':
        {
            Area = 3.14*Radius*Radius;
            printf("The Area Of Circle is : %f",Area);
        }
    break;
    case 'c':
    case 'C':
        {
            Circumference = 2*3.14*Radius;
            printf("The Circumference Of Circle is : %f",Circumference);
        }
    break;
    default :
    {
        printf("You Enter The Wrong Choise");
    }
    break;
	}
	return 0;
}
