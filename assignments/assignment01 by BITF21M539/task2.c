#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	

	int dividend, devisor;
	//dealing dividend
	printf("Enter Dividend>> ");
	scanf("%d", &dividend);
	while (dividend <= 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &dividend);
	}
	//dealing devisor
	printf("Enter devisor>> ");
	scanf("%d", &devisor);
	while (devisor <= 0 || dividend<devisor)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &devisor);
	}

	//performing calculation
	int remainder, quotient=0;
	remainder = dividend;
	while (remainder>=devisor)
	{
		remainder = remainder - devisor;
		quotient++;
	}
	printf("remainder:%d\nquotient:%d\n", remainder, quotient);

	return 0;

}
