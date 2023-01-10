#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

double futureValue(double p, double i, double t)//fuction to find future value by passing
{                                                  //present amount,interest rate ,number of months
	double x = 1 + i;
	double f = p * pow(x, t);
	return f;
}
int main()
{
	double pAmount, interestR;
   double nOfMonths;
	
	
	printf("Enter present amount >>");//taking present amount
	scanf("%lf", &pAmount);
	

	printf("Enter interst rate>>");// taking interest rate in percentage
	scanf("%lf", &interestR);
	interestR = 0.01 * interestR;//conterting to points

	printf("Enter Number of months>>");//taking number of months
	scanf("%lf", &nOfMonths);
    //calling future value fuction
	printf("future value after %.1f months will be:%.2f", nOfMonths, futureValue(pAmount, interestR, nOfMonths));
	return 0;
}