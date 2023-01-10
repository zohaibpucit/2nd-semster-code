#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isEven(int num)   //function to determine is number is even 
{
	if ((num / 2) * 2 == num)
		return 1;
	else
		printf("ERROR!\n");
	return 0;
}

int main()
{
	int height, width;
	//taking height from user
	do
	{
		printf("Enter height even and at least 4:"); 
		scanf("%d", &height);                              //usion isEven fuction to determine is number is even                         
	} while (isEven(height) == 0 || height < 4);                //if number is not even loop itrate    
	                                                       //or if height is less than 4 also itrate
	                                              

	do
	{
		printf("Enter Width even and at least 6:");
		scanf("%d", &width);                      //usion isEven fuction to determine is number is even 
	} while (isEven(width) == 0 || width < 6);       //if number is not even loop itrate    
	                                             //or if height is less than 4 also itrate
	for (int i = 1; i <= height; i++)//outer loop jumps from one loop to another using \n  
	{
		for (int j = 1; j <= width; j++)//this loop control each row
		{
			if ((i == 1 || i == height || j == 1 || j == width))//since i control position of rows line number 
				printf("*");                                    //is one or last line print stars width times
			else                                                //similarly j is just like colum number if colum is 1 
				printf(" ");                                     // or last colum print "*" otherwise print space " "
		}
		printf("\n");
	}
	return 0;

}