#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//this function get toatl of all elements
int getTotal(int arr[][3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];

		}
	}
	return sum;
}
//this function returns average of all elements
double getAverage(int arr[][3])
{
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];

		}
	}
	int elements = 3 * 3;
	double average = sum / elements;
	return average ;
}
//this function demands array and its row number and gives total of that row
int getRowTotal(int arr[][3], int a)
{
	a = a - 1;
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum = sum + arr[a][j];
	}
	return sum;
}
//this function demands array and its colum number and gives total of that colum
int getColumTotal(int arr[][3], int a)
{
	a = a - 1;
	int sum = 0;
	for (int j = 0; j < 3; j++)
	{
		sum = sum + arr[j][a];
	}
	return sum;
}
//this function demands array and its row number and gives maximum of that row
int getHighestInRow(int arr[][3], int a)
{
	a = a - 1;
	int highest=arr[a][0];
	for (int j = 0; j < 3; j++)
	{
		if (highest < arr[a][j])
		{
			highest = arr[a][j];
		}
	}
	return highest;
}
//this function demands array and its row number and gives lowest of that row
int getLowestInRow(int arr[][3], int a)
{
	a = a - 1;
	int lowest = arr[a][0];
	for (int j = 0; j < 3; j++)
	{
		if (lowest > arr[a][j])
		{
			lowest = arr[a][j];
		}
	}
	return lowest;
}
//function to display matrix
int display(int arr[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		puts("");
	}
}
int main()
{
	int arr[3][3] = { {1,2,3},
					  {7,8,9}, 
	  				  {4,5,6}
	};
	display(arr);
	int sum = getTotal(arr);
	printf("total of all elements: %d\n", sum);
	double average = getAverage(arr);
	printf("average of all elements:%.2f\n", average);
	printf("total of row 2 :%d\n", getRowTotal(arr, 2));
	printf("total of colum 1:%d\n", getColumTotal(arr, 1));
	printf("highest in row 3:%d\nlowest in row 3:%d\n",getHighestInRow(arr,3),getLowestInRow(arr,3));
	return 0;
}
