/*
 ============================================================================
 Name        : EX_7_Write_Source_Code_to_Swap_Two_Numbers_without_temp_variable_But_Using_Mathematical_Operations_it_is_an_interview_trick.c
 Author      : Mohamed Elassy
 Created on  : September 23, 2024
 Description : it is an interview trick. Write Source Code to Swap Two Numbers without temp variable. in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	// The First Method is To Use Mathematical Operations
	a=a+b;   // Now ( a ) Contains The Sum Of The Values a and b..
	b=a-b;  //  We subtract the value of b from the larger a and thus we have recorded the smaller a in b.
	a=a-b; //   We subtract the value of The Small b from the larger a and thus we have recorded the smaller a in a.
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f\n",b);
	return 0;
}
