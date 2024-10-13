/*
 ============================================================================
 Name        : Lab_2_Calculate_The_Minimum_Value_of_any_Given_Array.c
 Author      : Mohamed Elassy
Created on  : October 13, 2024
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcmin( int values[], int n)
    {
        int minvalue=values[0],i;
        for (i=0 ; i<n ;i++)
        {
            if(values[i]<minvalue)
                minvalue=values[i];
        }
        return minvalue;
    }
int main()
{
    int xvalues[10]={35,67,27,54,76,44,59,32,43,25};
    int yvalues[5]={28,71,67,83,62};
    int zvalues[13]={87,21,74,36,27,64,84,63,27,86,48,32,76};
    printf("The Minmum of X, Y, Z, Values is ( %d, %d, %d )\r\n",calcmin(xvalues,10),calcmin(yvalues,5),calcmin(zvalues,13));
    return 0;
}
