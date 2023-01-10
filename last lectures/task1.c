#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int s = 1;
	int* ptr;
	for (int i = 0; i < 10000; i++)
	{
		ptr = (int*)malloc((s * 10) * sizeof(int));
		s =s*2;
		if (ptr == NULL)
		{
			printf("%d", s * 10000);
			return 0;
		}
	}
	
}
