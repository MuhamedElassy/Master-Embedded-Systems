/*
 ============================================================================
 Name        : EX_8_Write_Source_Code_to_Swap_Two_Numbers_without_temp_variable_But_Using_Logical_Operations_it_is_an_interview_trick.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : it is an interview trick. Write Source Code to Swap Two Numbers without temp variable. in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b;
    printf("Enter value of a: ");
    fflush(stdout);
    scanf("%d",&a);
    fflush(stdout);
    printf("Enter value of b: ");
    fflush(stdout);
    scanf("%d",&b);
    // The Second Method is To Use Logical Operations
    //Let a = 5 , b = 3
    a = a ^ b;
    /*
     a ==> 5 =>(00000101)
     b ==> 3 =>(00000011)
     Make XOR Logic
     a ==> 6 =>(00000110)
    */
    b = a ^ b;
    /*
     a ==> 6 =>(00000110)
     b ==> 3 =>(00000011)
     Make XOR Logic
     b ==> 5 =>(00000101)
    */
    a = a ^ b;
    /*
     a ==> 6 =>(00000110)
     b ==> 5 =>(00000101)
     Make XOR Logic
     b ==> 3 =>(00000011)
    */
    printf("After swapping, value of a = %d\n",a);
    printf("After swapping, value of b = %d\n",b);
	return 0;
}
