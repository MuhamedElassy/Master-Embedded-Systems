/*
 ============================================================================
 Name        : Lab_1_C_Basics_To_Calculate_Circle_Area_or_Circumference.c
 Author      : Mohamed Elassy
 Created on  : September 21, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 int main(void)
 {
     float z ,x;
     float radius;
     char choise;
     printf("Please Enter The Radius : ");
     fflush(stdin);
     fflush(stdout);
     scanf("%f",&radius);
     printf("If You Want The Area Click 'a' If You Want The Circumference Click 'c' : ");
     fflush(stdin);
     fflush(stdout);
     scanf("%c",&choise);
     if (choise=='a' || choise=='A')
     {
         z = 3.14*radius*radius;
         printf("The Area of Circle is : %f",z);
     }
     else if (choise=='c' || choise=='C')
     {
         x = 2*3.14*radius;
         printf("The Circumference of Circle is : %f",x);

     }
     else
     {
         printf("You Enter Wrong Choise");
     }
 }
