#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long int main()
{
	long int num1, num2;
	printf("      ONLY ENTER BINARY NUMBERS\n");
	printf("Enter First Binary Number>> ");
	scanf("%ld", &num1);
	while (num1 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");

		scanf("%ld", &num1);
	}
	//DISPLAY WORKING
	printf("Enter Second Binary Number>> ");
	scanf("%ld", &num2);
	while (num2 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%ld", &num2);
	}
	printf("%10d\n%10d", num1, num2);
	printf("\n --------------\n");

	long int digit1, digit2;
	digit1 = digit2 = 0;
	long int sumOfdigits = 0;            //inializing all verialbles to zero
	long int remainder = 0;
	long int wholeSum = 0;
	long int place = 1;                   //this veriable determind the place

	while (num1 != 0 || num2 != 0)    //loop itrates untill both equal to zero
	{
		digit1 = num1 % 10;
		num1 = num1 / 10;

		digit2 = num2 % 10;
		num2 = num2 / 10;

		sumOfdigits = digit1 + digit2 + remainder;    //sum after extracting right digits of numbers
		remainder = 0;                       //remainder assined to zero after during each itration

		if (sumOfdigits == 2)
		{
			remainder = 1;
			sumOfdigits = 0;
		}
		else if (sumOfdigits == 3)
		{
			remainder = 1;
			sumOfdigits = 1;
		}

		wholeSum = wholeSum + sumOfdigits * place;
		place = place * 10;

	}
	if (remainder > 0)                   //this is done for last itration if still remain remainder 
	{                                       //because loop stops before it
		wholeSum = remainder * place + wholeSum;
	}



	printf("%10d\n --------------", wholeSum);


	return 0;
}