#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//function for taking string
void input(char a[])
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n')
	{
		a[i++] = ch;
	}
	a[i] = '\0';
}
int main()
{
	char str1[50];
	char str2[50];
	//entering first string
	printf("Enter First string >");
		input(str1);
	//entering second string
	printf("Enter Second String >");
	input(str2);
	int n;//num of elements to be compared
	printf("How many characters you want to compare >");
	scanf("%d", &n);
	//calling libray function to compare  
	//return three possible integer types
	
	int a = strncmp(str1, str2,n);
	if (a > 0)//if strncomp return positive
		printf("String 1 is graetor");
	else if (a == 0)//if returns zero
		printf("Both string sare equal");
	else
		printf("String 2 is greator");



	return 0;
}
