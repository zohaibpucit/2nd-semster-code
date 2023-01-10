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
	int num1 = atoi(arr1);
	//entering second string of numbers
	printf("Enter 2nd Number >");
	scanf("%9s", arr2);
	int num2 = atoi(arr2);
	//entering 3rd string of number
	printf("Enter 3rd Number >");
	scanf("%9s", arr3);
	int num3 = atoi(arr3);
	//entering 4th string of numbers
	printf("Enter 4th Number >");
	scanf("%9s", arr4);
	int num4 = atoi(arr4);

	printf("first number :%9d\nSecond Number:%9d\nthird Number :%9d\nFourth Number:%9d\n", num1, num2, num3, num4);
	int sum = num1 + num2 + num3 + num4;
	printf("The total OF these Numbers is:%d", sum);


	return 0;
}
