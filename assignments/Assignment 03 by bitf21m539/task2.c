#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int removeNegative(int arr[], int size, int* newSize)
{
	int countN = 0;
	int countP = 0;
	//counting posives
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
			countP++;
	}
	//counting -ves
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
			countN++;
	}
	//veriable for saving index of array
	int saveLoc = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)//if number is -ve
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[j] >= 0 && j != saveLoc)
				{
					int tem = arr[i];
					arr[i] = arr[j];     //shufling values
					arr[j] = tem;
					saveLoc = j;         //saving loction of shuffled
					break;
				}
			}
		}
	}
	*newSize = countP;//returning positive numbers count
	return countN;//returning -ve count
}
int main()
{
	int arr[10] = { 1,2,3,8,4,4,4,-4,3,-7};
	int size;
	int n=removeNegative(arr, 10, &size);
	printf("elements are negative:%d\n", n);
	printf("new size of array:%d\nand its elements are:\n{", size);
	
	for (int i = 0; i <size ; i++)
	{
		printf("%d,", arr[i]);
	}
	printf("}");
	return 0;
}
