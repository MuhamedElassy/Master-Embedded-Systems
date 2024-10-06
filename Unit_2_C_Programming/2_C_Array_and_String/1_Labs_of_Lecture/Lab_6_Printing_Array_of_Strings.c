/*
 ============================================================================
 Name        : Lab_6_Printing_Array_of_Strings.c
 Author      : Mohamed Elassy
 Created on  : October 6, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char names[5][14]={"Ahmed Alaa",
            "Ahmed Osama","Ahmed Mamdouh","Ahmed Samy","Ahmed Hossain"};
            for(int i=0 ; i<5 ; i++)
            {
                printf("%s\r\n",names[i]);
            }
    return 0;
}
