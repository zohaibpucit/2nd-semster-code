#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct abc
{
	int num;
	double* marks;

};
int main()
{
	struct abc s1 ;
	printf("Enter number of subjects >");
	scanf("%d", &s1.num);
	s1.marks = (double*)malloc((s1.num) * sizeof(double));
	if (s1.marks == NULL) 
		return 0;
	for (int i = 0; i < s1.num; i++)
	{
		printf("Enter Marks of subject %d >", i + 1);
		scanf("%lf", &s1.marks[i]);
	}
	printf("\nnumbers of subjects are: %d\n", s1.num);
	printf("You Entered Marks are:\n");
	double sum = 0;
	for (int i = 0; i < s1.num; i++)
	{
		sum = sum + s1.marks[i];
		printf("marks in subject %d: %f\n",i+1, s1.marks[i]);
	}
	printf("Total Marks are:%f", sum);
	free(s1.marks);
	return 0;
}
