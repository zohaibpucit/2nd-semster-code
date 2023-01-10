#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int i = 2;//this veriable devides number during each itration
	printf("Enter Number >>");
	scanf("%d", &n);

	while (i < n) //loop itrates till number being checked id prime is equal to i
	{
		if ((n / i) * i == n) //if condition satisfied it means number devides other than 1 and itself 
		{                      //so
			printf("%d  is not prime number",n);
			break;

		}
		
		i++;

	}

	if (i == n)             //otherwise number is prime
	{
		printf("%d is  prime number",n);
	}

	return 0;	

}