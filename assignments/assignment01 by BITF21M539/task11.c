#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter starting integer:");
	scanf("%d", &x); //here we took starting value
	y = x;      //assigned starting values x to another veriable y
	int looping ;    //looping veriable is last value
	printf("Enter ending point:");
	scanf("%d", &looping);

	for (int i = 1; y <= looping; i++)   //outer loop executes untill end value comes
	{
		for (int j = 1; y <= looping; j++)     //this loop execute untill end value comes
		{    
			printf("(%d,%d)", x, y);
			y++;
		}
		printf("\n");  //for new line
		looping = looping - 1;//after one time execution end value decreased by 1
		x=x+1;   //now in new line value of x in(x,y) increase by one
		y = x;   //value of x assign to y veriable
		
	}
	return 0;
}