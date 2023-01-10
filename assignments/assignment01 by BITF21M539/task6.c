#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	int nextPrime = 0, previousPrime = 0;
	printf("Enter a positive Integer>>");
	scanf("%d", &num);
	printf("The twin pairs between 2 and %d are:\n", num);

	int div = 0;
	int i, j;


	for (j = 2; j <= num; j++)              //here prime number are if the are prime 
	{
		div = 0;                     //{
		for (i = 1; i <= j; i++)
		{                                //this loop determines that number is prime
			if (j % i == 0)
				div++;
		}                           //{
		previousPrime = 0;
		if (div == 2)               //
		{
			previousPrime = nextPrime; //next value of prime assign to previous after each itration
			nextPrime = j;            //if j is prime it assign to next prime

		}

		if (nextPrime - previousPrime == 2 && previousPrime != 0)
		{                                              //becouse zero is not prime
			printf("(%d,%d)\n", previousPrime, nextPrime);

		}

	}
	return 0;
}