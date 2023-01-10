#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void maxCount(int* arr, int size,int* ptrMa,int* ptrFreq)
{
	
	int mAccr=*arr;//storing first elements as most accured
	int freq = 0;//it counts frequency of most occured
	int count = 0;//it count accuring
	for (int i = 0; i < size; i++)
	{
		count = 0;//zero for every element
		for (int j = i + 1; j < size; j++)
		{
			if (*(arr+i) == *(arr+j) )//comparing with next elements
			{
				count++;
			}
		}
		//if frequency of most occring is less than any others
		if (count > freq)
		{
			freq = count;//store its count
			mAccr = *(arr+i);//store element
		}

	}
	*ptrMa = mAccr;//by reference returning elements
	*ptrFreq = freq+1;//adding 1 because one time it compared by itself
} 
int main()
{
	srand(time(0));
	int arr[50];
	//assigning 50 elements by random numbers lesser than 49
	for (int i = 0; i < 50; i++)
	{
		arr[i] = rand() % 49;
		printf("%d, ", arr[i]);
	}
	int mostFreq;
	int freq;
	//calling function
	maxCount(arr,50,&mostFreq,&freq);
	if (freq > 0)
		printf("\nThe Most accuring numbers is:%d\nIts Frequency is:%d", mostFreq, freq );
	else
		printf("All number accurs one time");
	return 0;
}



