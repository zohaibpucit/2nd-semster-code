#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isOdd(int num)
{
	if ((num / 2) * 2 == num)   //function to determine if number is odd number 
	{
		printf("ERROR\n");
		return 0;
	}
	else
		return 1;
}
int main(){

	int height, width;
	do        // this loop itrate untill user entered odd number....
	{
		printf("enter height odd number and at least 3>>");
		scanf("%d", &height);
	} while (isOdd(height) == 0 || height < 3);//... by using isOdd fuction and if heigt is less than 3

	do
	{//similarly this loop itrate until user enter odd number or less than 5

		printf("enter width odd number and at least 5>>");
		scanf("%d", &width);
	} while (isOdd(width) == 0 || width < 5);

	for (int i = 1; i <= height; i++)      //we used these loops to print justn  + symble 
	{
		for (int j = 1; j <= width;j++)
		{
			if ((i / 2) * 2 == i)//this condion is to deternime id row is even or not
			{
				//if is even print + and soace
				printf("+");
				printf(" ");
				j++; // as we are printing to thigs this time we increase one time more loop controler
			}
			else
				printf("+");//if is odd print + just loop controler time 
		}
		printf("\n");//after printing things width times go to next line
	}

	return 0;
}