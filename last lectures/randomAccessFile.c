#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE* ptr = fopen("zohaib.txt", "r+");
	if (ptr == NULL)
	{
		printf("file not exist ");
		return 0;
	}
	printf("inially:%d\n", ftell(ptr));
	fseek(ptr, 2, SEEK_CUR);
	printf("1:%d\n", ftell(ptr));
	char arr[5];
	fgets(arr, 3, ptr);
	printf("1.1:%d\n", ftell(ptr));
	printf("%s\n", arr);
	fseek(ptr, 2, SEEK_CUR);
	printf("2:%d\n", ftell(ptr));
	fputs("a", ptr);
	printf("3:%d\n", ftell(ptr));
	rewind(ptr);
	printf("4:%d\n", ftell(ptr));
	fseek(ptr, -5, SEEK_END);
	printf("5:%d\n", ftell(ptr));
	fseek(ptr, 0, SEEK_END);
	printf("length of string is: %d\n", ftell(ptr));

	return 0;
}
;
