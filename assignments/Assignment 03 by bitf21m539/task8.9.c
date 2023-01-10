#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
	//adding first string
	printf("Enter First string >");
	scanf("%s", str1);
	//adding second string
	printf("Enter Second String >");
	scanf("%s", str2);
	//using library function which gives three possible numbers typre
	int a = strcmp(str1, str2);
	if (a > 0)//if strcomp return positive
		printf("String 1 is graetor");
	else if (a == 0)//if zero
		printf("Both string sare equal");
	else
		printf("String 2 is greator");



	return 0;
}
