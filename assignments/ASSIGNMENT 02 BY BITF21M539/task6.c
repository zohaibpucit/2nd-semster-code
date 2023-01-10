#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double getSale()//this fuction gets sale
{
	static int num = 0;//static says that number should not destroy after comming out of it
	num = num + 1;     //for each time commung into fuction number increase by one
	
	double sale;
	printf("Enter division %d's quarterly sales figure>>",num);
	scanf("%lf", &sale);
	return sale;//after getting sale from user number return that sale
}
void findHighest(double a, double b, double c, double d)//this fuction get highest of four numbers
{
	double max = a;//let a is highest
	int num = 1;   //declare a number

	if (b > max)     //if number b is graetor than max assign max to b 
	{
		max = b;
		num = 2;//and number to 2
	}
	if (c > max)     //if number c is graetor than max assign max to c
	{
		max = c;
		num = 3;  //and number to 3
	}
	if (d > max)//if number c is graetor than max assign max to c
	{
		num = 4; 
		max = d;  //and number to 3
	
	}
	//showing maxinum and his related number
	printf("division no.%d has maximum sale figure which is:%.2f\n", num, max);

}
int main()
{
	double sale1, sale2, sale3, sale4;
	sale1 = getSale();//calling getsale fuction
	sale2 = getSale();//calling getsale fuction
	sale3= getSale();//calling getsale fuction
	sale4 = getSale();//calling getsale fuction
	findHighest(sale1, sale2, sale3, sale4);//calling function to find highest number
	return 0;
}