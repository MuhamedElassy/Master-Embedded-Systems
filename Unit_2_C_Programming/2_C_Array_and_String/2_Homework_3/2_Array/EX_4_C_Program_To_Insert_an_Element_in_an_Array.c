/*
 ============================================================================
 Name        : EX_4_C_Program_To_Insert_an_Element_in_an_Array.c
 Author      : Mohamed Elassy
 Created on  : October 8, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[30],n,i,element,position;
    printf("Enter Number of Elements : ");
    fflush(stdin);  fflush(stdout);
    scanf("%d",&n);
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("Enter the element to be inserted: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &element);
    printf("Enter the location: ");
    fflush(stdin);  fflush(stdout);
    scanf("%d", &position);
    for (i = n; i >= position; i--)
        {
            nums[i] = nums[i - 1];
        }
    nums[position - 1] = element;
    n++;
    for (i = 0; i < n; i++)
        {
            printf("%d ", nums[i]);
        }
    return 0;
}
