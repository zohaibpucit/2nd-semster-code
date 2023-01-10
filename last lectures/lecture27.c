#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 30, b = 50;
	int* p = &a;
	int* q = &b;
	*p = *q + 12;
	printf("%d %d", *p, *q);
	q = p;
	p = q;
	*q = *q + 5;
	*p = *p + 5;
	printf("%d %d", a, b);

	return 0;
}
