#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char arr1[10];
	char arr2[10];
	char arr3[10];
	char arr4[10];
	//ENETRING first string of numbers
	printf("Enter 1st Number >");
	scanf("%9s", arr1);
	double num1 = atof(arr1);
	//entering second string of numbers
	printf("Enter 2nd Number >");
	scanf("%9s", arr2);
	double num2 = atof(arr2);
	//entering 3rd string of number
	printf("Enter 3rd Number >");
	scanf("%9s", arr3);
	double num3 = atof(arr3);
	//entering 4th string of numbers
	printf("Enter 4th Number >");
	scanf("%9s", arr4);
	double num4 = atof(arr4);

	printf("first number :%9.5f\nSecond Number:%9.5f\nthird Number :%9.5f\nFourth Number:%9.5f\n", num1, num2, num3, num4);
	double sum = num1 + num2 + num3 + num4;
	printf("The total OF these Numbers is:%f", sum);


	return 0;
}
