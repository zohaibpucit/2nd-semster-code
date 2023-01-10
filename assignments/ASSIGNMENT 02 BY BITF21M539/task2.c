#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPositive(int num)//This function validate if number is positive or not
{
	if (num > 0)
		return 1;
	else
		printf("ERROR\n");
		return 0;
}
int main()
{
	int input;
	do
	{                                       //enter positive number 
		printf("Enter positive number:");
		scanf("%d", &input);

	} while (isPositive(input) == 0);//this condition says that is number is negative again loop 
	                                   //itrate and enetr new number from user
	printf("\n\n\n\n*************************************Table**********************************\n\n\n");//styling
	printf("    ");//formatting table
	    int j;               //j is ued to horizontally printing number from 1 to user entered number
		for ( j = 1; j <= input;j++)
		{
			printf("%d\t", j); //with spacing 
		}
		printf("\n   +");//go to next line and after space write + sign

		for (int k = 1; k <= (j * 7 -5); k++)//addjusting line------s in table
		{
			printf("-");
		}
		printf("\n");//go to next line

		int result;//declaring a veriable named result
		for (int i = 1; i <= input; i++)//itarte input number entered time from 0 to number
		{
			printf("%2d |", i);//taking two numbers place and print i which is 1 initially 
			for (int j = 1; j <= input; j++)//this loop itrate 1 to number enterd time 
			{
				result = i * j;//mutilpy intially 1 to digit from range 1 to number enter
				printf("%d\t", result);// and printing number each time with spacing as we first used spaces
			}
			printf("\n");

		}

	
		

	return 0;
}

