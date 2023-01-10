#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//We made this function to check  if value is 
//graetor than starting limit and less than end limit
int isValid(double num, double start, double end)
{
	if (num >= start && num <= end)
		return 1;
	else {
		printf("ERROR!\n");
		return 0;
	}
}
//this fuction will get radius..
int getRadius()
{
	double rds;
	do {
		printf("enter radius from 10.0 to 50.0 >>");
		scanf("%lf", &rds);
	} while (isValid(rds, 10.0, 50.0) == 0);//..untill radius is in range 10.0 to 50.0
	return rds;

}
//in this function we passes radius and adress of AREA(aArea) * shows this is value at address of arae
void calculateArea(int radius, double *aArea)
{
	*aArea = 3.14 * radius * radius;
}
void displayArea(int area) //this fuction accept value and diplay on screen
{
	printf("The Area Of Circle Is:%d",area);
}
int main() {

	double area;//declaration of area veriable
	calculateArea(getRadius(), &area);   //passing funtion to get length radius of cicle  and passing address of area
	                                     //to calulte arae
    displayArea(area);              //passing calculated area to function to display on screen
	return 0;
}