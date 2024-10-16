/*
 ============================================================================
 Name        : EX_1_Prime_Numbers_Between_Two_Intervals_By_Making_User_Defined_Function.c
 Author      : Mohamed Elassy
 Created on  : October 16, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void check(int x, int y)
{
 for (int i=x;i<=y;i++)
 {
     if(i%2!=0)
        printf("%d ",i);
 }
}
int main()
{
    int X,Y;
    printf("Enter Two Number (Intervals): ");
    fflush(stdin);  fflush(stdout);
    scanf("%d %d",&X,&Y);
    printf("Prime Numbers Between %d and %d are : ",X,Y);
    check(X,Y);
    return 0;
}
