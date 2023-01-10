#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int noOfEmploys()//function taking number of employees 
{
	int nEmpl;
	printf("enter number of employees in Company>>");
	scanf("%d", &nEmpl);
	return nEmpl;//return that employees numbers
}
int totalDays(int n)//taking all employees absent days and finding thier sum
{
	int sum = 0;
	int days;
	for (int i = 1; i <= n; i++)
	{
		printf("Enter no. of absent days of employee %d>>", i);
		scanf("%d", &days);
		sum = sum + days;
	}
	return sum;//returning sum
}
double averageDays(double sumOfCommodities, double numOfcommudities)//fing average
{                                                         // by taking sum of things and number of things
	double average = sumOfCommodities / numOfcommudities;
	return average;//returning average

}

int main()
{
	double num = noOfEmploys();//calling function to take number of employees
	double tDays = totalDays(num);//calling fuction to take total days all employees absent
	                              //¬below line fing and display average days
	printf("The average absent days of each employee is:%.2f", averageDays(tDays, num)); 
	return 0;


}