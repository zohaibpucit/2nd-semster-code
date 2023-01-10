#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char choice='y';
	while (choice == 'y')
	{
		char key;                             //In  this program we simple deal 
		printf("Enter a Character:");          //with ascii value of keys of keyboard
		scanf("%c", &key);
		getchar();
		if (key >= 65 && key <= 90)
			printf("It is a Capital Alphabet!\n");
		else if (key >= 97 && key <= 122)
			printf("It is a small Alphabet!\n");
		else if (key >= 48 && key <= 57)
			printf("It is a Digit!\n");
		else
			printf("It is some other Character\n ");
		printf("DO you WAnt to enter again(Y/N)");
		scanf("%c", &choice);
		getchar();
	}
	printf("Program Finished\n");
	return 0;
}