#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	int sum=0, product;
	printf("Enter First Number>> ");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &num1);
	}

	printf("Enter Second Number>> ");
	scanf("%d", &num2);
	while (num2 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &num2);
	}
	
	for (int i = 1; i <= num2; i++)
	{
		sum = sum + num1;           //sum untill second number  times comes
	}

	printf(" the product of %d and %d is :%d",num1,num2, sum);
	return 0;
	

}