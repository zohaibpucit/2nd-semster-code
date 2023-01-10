#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, d, aN;
	printf("Enter First Number of series 1:  ");
	scanf("%d", &a);						
	printf("Enter difference of series 1:   ");
	scanf("%d", &d);
	printf("Enter number from series 1:  ");
	scanf("%d", &aN); 
	
	int i = 1;							  
	while (a < aN)   
	{									  
		a = a + d;						  
		i++;				    //this loop itrates i times 			  
	}				             //untill number entered  from series 1 occurs  
	int b;								  
	printf("Enter first NUmber of series 2:  ");
	scanf("%d", &b);
	
	int j = 1;

	while (j < i)
	{                      //this loop itrates  i times
		b = b + 1;            //when number comes
		j++;
	}
	printf("Your Corresponding Number is a %d", b);
	return 0;

}