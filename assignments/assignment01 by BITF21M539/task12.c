#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;                    //here number is basically line number having maximun star after 
	printf("Enter Number:");       //and before it stars decresed by 2 units
	scanf("%d", &num);
	num = num * 2 - 1;       //here number is maximun star in line number user enter number
	int a = num / 2, b = num / 2 + 2;
	for (int j = 1; j <= (a + b) / 2; j++)
	{
		for (int i = 1; i <= num; i++)
		{
			if (i > a && i < b)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		a = a - 1;
		b = b + 1;
	}
	//below printing maximum stars in line 
	a = 1, b = num;
	for (int i = 1; i <= num / 2; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (j > a && j < b)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		a = a + 1;
		b = b - 1;
	}
	return 0;
}