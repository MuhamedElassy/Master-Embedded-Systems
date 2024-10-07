/*
 ============================================================================
 Name        : Example_of_break_Statement.c
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
    float sum=0,num,avg;
    printf("Maximum No. of Inputs : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        printf("Enter N%d : ",i);
        fflush(stdin);  fflush(stdout);
        scanf("%f",&num);
        if(num<0.0)
            break;
        sum += num;
    }
    avg = sum / (i-1) ;
    printf("Average = %0.2f",avg);
    return 0;
}
