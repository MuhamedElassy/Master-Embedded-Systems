/*
 ============================================================================
 Name        : 2_Assignment_To_Calculate_The_Factorial_By_Using_Recursion_Function_Not_For_Loop.c
 Author      : Mohamed Elassy
 Created on  : October 16, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Fact(int Count)
{
    /* The function of static classes here is to record the last value
     it reached in sum to protect it from being re-initialized.*/
    static int Sum=1;
    if (Count==0)
        Count=1;
    Sum*=Count;
    Count--;
    if (Count>0)
        Fact(Count);
    return Sum;
}
int main()
{
    int Num;
    printf("Enter The Number : ");
    fflush(stdin);   fflush(stdout);
    scanf("%d",&Num);
    fflush(stdin);   fflush(stdout);
    printf("The Factorial of ( %d ) is %d",Num,Fact(Num));
    return 0;
}
