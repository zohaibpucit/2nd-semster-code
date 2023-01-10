#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter First Number>> ");
	scanf("%d", &num1);
	while (num1 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &num1);
	}
	//DISPLAY WORKING
	printf("Enter Second Number>> ");
	scanf("%d", &num2);
	while (num2 < 0)
	{
		printf("Invalid Input!Enter first number \n");
		printf("again:");
		scanf("%d", &num2);
	}
	printf("%10d\n+%9d", num1, num2);
	printf("\n --------------\n");
	//PERFORMING CALCULATIONS BY HAND
	int digit1, digit2;//using for storing right digits of numbers to be added
	digit1 = digit2 = 0;
	int sumOfdigits = 0;     //inilizing all varibles by 0
	int remainder = 0;
	int wholeSum = 0;
	int place = 1;// ths varible used to derterming the place of answere

	while (num1 != 0 || num2 != 0)  //we do it so that loop execute untill either       
	{                                //two number be added is zero
		digit1 = num1 % 10;             //extraxting left digit of number 1
		num1 = num1 / 10;                 //number after extracting left digit

		digit2 = num2 % 10;            //extraxting left digit of number 2
		num2 = num2 / 10;                  //number after extracting left digit

		sumOfdigits = digit1 + digit2 + remainder;    //it is sum of digit +remainder which is inially zero
		remainder = 0;     //remiander assign to zero after every iteration

		if (sumOfdigits >= 10)     
		{                            //this will execute if sum of digits is greator than zero
			remainder = sumOfdigits / 10;
			sumOfdigits = sumOfdigits % 10;
		}
		wholeSum = wholeSum + sumOfdigits * place;  //this is very important because we multiplied 
		place = place * 10;

	}
		if (remainder > 0)             //this is done after termination of loop 
		{                               //if still remain remainder becouse loop stops before
			wholeSum = remainder * place + wholeSum;
		}



		printf("%10d\n --------------", wholeSum);


		return 0;
}