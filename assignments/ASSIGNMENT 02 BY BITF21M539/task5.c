#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("(hypotinuos)2=\t(base)2\t+     (perpendicular)2\tStatus\n");
	for (int i = 1; i <= 200; i++)    // this loop itrates 1 to 200.. ..   these loops basically find
	{                                 //                               .   three combination of numbers 
		for (int j = 1; j <= 200; j++)//also itrate sametime           .    fron 1 to 200      
		{                             //                               .
			for (int k = 1; k <= 200;  k++)  //it also itrate 200 times. 
				
			{
				if (i * i == (j * j) + (k * k))        //   condtion says combinations should 
					                                     // obey pythagorous Theorm
					printf("(%d)2\t=\t(%d)2\t+\t(%d)2\t\tproved   ::::>>  (%d=%d)\n  ", i, j, k,i*i,j*j+k*k);
			}
		}
	}
	return 0;
}