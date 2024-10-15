/*
 ============================================================================
 Name        : Lab_3_To_Clarify_The_Difference_Between_Bass_By_Value_and_Refernce.c
 Author      : Mohamed Elassy
 Created on  : October 15, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void trytomodify(int x,char text[])
{
    x++;
    text[0]--;
}
int main(void)
{
    int v=3;
    char name[5]={"Good"};
    printf("V = %d, Name = %s\r\n",v,name);
    trytomodify(v,name);
    printf("V = %d, Name = %s\r\n",v,name);
    return 0;
}
