#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int rollNumber;
	int numberOfSemster;
	float gpa=0;
	float tgpa = 0;
	float cgpa=0;

	printf("Enter your Roll Number:");
	scanf("%d", &rollNumber);
	printf("Enter Number of Semsters:");
	scanf("%d", &numberOfSemster);
	
	int i = 1;
	do
	{
		printf("Enter Your semster %d GPA:",i);
		scanf("%f", &gpa);
		tgpa = tgpa + gpa;
		i++;                             //In this programe we calculate simple 
		                                 //average becouse sir asked do like this
	} while (i <= numberOfSemster);

	cgpa = tgpa / numberOfSemster;

	printf("*************************Result Card******************************\n");
	printf("Roll Number:%d\n", rollNumber);
	printf("CGPA:%.2f", cgpa);
	return 0;
	
}