#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1, num2;
    printf("Enter First Number>>");
	scanf("%d", &num1);
	printf("Enter second  Number>>");
	scanf("%d", &num2);
	int lcm = num1;
	if (num1 < num2)
		lcm = num2;      //here we assign bigger number to lcm becouse
	while (1)              //lcm is either greator equal to bigger number
	{
		if (lcm % num1 == 0 && lcm % num2 == 0)
			break;
		else
			lcm++;
	}
	printf("The LCM of %d and %d is:%d", num1, num2, lcm);

}