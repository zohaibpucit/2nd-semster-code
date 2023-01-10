#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}//swaping function
void rotate(int arr[], int size, int shift)
{
	for (int j = 0; j < shift; j++)//number of shifts
	{
		for (int i = 0; i < size - 1; i++)
		{
			swap(&arr[i], &arr[size - 1]);//swaping each element by last array element it result one shift
		}
	}
}
int main()
{

	int arr[10] = { 1,2,3,4,5,6 ,7,8,9,10 };
	int shift;
	//displaying array
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", arr[i]);
	}
	puts("");
	//entering shift or rotations
	printf("Enter Shift >");
	scanf("%d", &shift);

	puts("");
	//calling function
	rotate(arr, 10, shift);
	for (int i = 0; i < 10; i++)
	{
		printf("%d,", arr[i]);
	}
	return 0;
}
