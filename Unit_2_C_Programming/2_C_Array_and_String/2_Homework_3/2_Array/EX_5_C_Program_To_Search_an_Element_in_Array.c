/*
 ============================================================================
 Name        : EX_5_C_Program_To_Search_an_Element_in_Array.c
 Author      : Mohamed Elassy
 Created on  : October 8, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[30],n,i,element;
    printf("Enter Number of Elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter The Elements to be Searched : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&element);
    for(i=0 ; i<n ; i++)
    {
        if(nums[i]==element)
        {
            printf("Number Found at The Location = %d",i+1);
            break;
        }
    }
    if (i==n)
    {
        printf("This Number is not Found in an Array");
    }
    return 0;
}
