#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//this function gives median if sorted array of interger
double median(int* arr, int size)
{
	double median;
	if ((size / 2) * 2 != size)//if elements are odd
	{
	    int midIndex;
	    midIndex = (size / 2)+1;//mid index
		median= *(arr+midIndex - 1);//median
		return median;

	}
	else//if elements are even
	{
		int firstmidindex = (size / 2) - 1;//first index of median
		int secondMidIndex = firstmidindex+1;//second indext of median
		median = (*(arr+firstmidindex) + *(arr+secondMidIndex)) / 2.0;//taking average of that elements
		return median;

	}
}
//this function sort an array if not sorted
void sort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (*(arr+i) > *(arr+j))
			{
				int temp = *(arr+i);
				*(arr + i) = *(arr + j);
				*(arr+j)= temp;
			}
		}    
	}
}

int main()
{
	int arr[8] = { 11,12,13,14,15,16,17,18};
	sort(arr,8);
	printf("median is :%f",median(arr,8));
	return 0;
}
