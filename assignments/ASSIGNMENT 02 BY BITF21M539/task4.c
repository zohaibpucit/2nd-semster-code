#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isEven(int num)          //This program return 1 if argument paased it 
{                                //is even and return 0 with printing error message if it is odd
	if ((num / 2) * 2 == num)
	{
		return 1;
	}
	else
	{

		printf("ERROR\n");
		return 0;
	}
}
int main()
{
	int num;
	do              //this loop execute untill number entered..... 
	{
	printf("enter even atleast biiger as 2>>");
	scanf("%d", &num);
	} while (isEven(num) == 0 || num < 2);  //....is even or atleast  2
	//this loops basically print a square of numbers 
	//in such a fashion if row number is  greator than 
	// colum  number it prints 0 else it print 1
	
	for (int i = 1; i <= num; i++) //.............. . 
	{                                          //   .                        
		for (int j = 1; j <= num; j++)         //   .                       
		{                    //this loop  print 0   .                           
			if (i > j)       //if row number        .----->this loop jumps between rows
				printf("0"); //is greator than colum.
			else             //otherwise print 1    .
				printf("1");                    //  .
		}                                       //  .
		printf("\n");              //................
	}
	return 0;

}
