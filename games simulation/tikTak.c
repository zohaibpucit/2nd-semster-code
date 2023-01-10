#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int conclusion(char a[3][3])
{
	if ((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]))
		return 1;
	else 	if ((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]))
		return 1;
	else 	if ((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]))
		return 1;
	else 	if ((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]))
		return 1;
	else 	if ((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]))
		return 1;
	else 	if ((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]))
		return 1;
	else 	if ((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]))
		return 1;
	else 	if ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]))
		return 1;
	else if ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]))
		return 1;
	else
		return 0;


}
char* find(char a[3][3], char num)
{
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			if (a[i][j] == num)
				return &a[i][j];
		}
	}
	printf("Enter Valid2 LOcation >");
	char n;
	scanf("%c", &n);
	getchar();
	return find(a, n);
}
void proceding(char a[3][3],char p1)
{
	
	int n;
	do {
		printf("Enter location You Want to keep ");
		scanf("%d", &n);
		getchar();
		if (!(n >= 1 && n <= 9))
			printf("Enter Valid1 loction\n");
	} while (!(n >= 1 && n <= 9));
	char num = n+48;
	char* ptr = find(a, num);
	*ptr = p1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c ", a[i][j]);
			}
			puts("");
		}
	
}
void display(char a[3][3],int s1,int s2,char p1,char p2)
{
	printf("                                             %c >  player 1 Score:%d\n",p1,s1);
	printf("                                             %c >  player 2 Score:%d\n",p2,s2);
	for (int i = 0; i < 3; i++)
	{
		printf("\t\t");
		for (int j = 0; j < 3; j++)
		{
			printf("%c\t", a[i][j]);
		}
		printf("\n\n");
		
	}

}
void reset(char *a)
{
	for (int i = 0; i < 9; i++)
	{
		*a = i+48+1;
		a++;
	}
	
}
int status(char a[3][3])
{
	for (int i = 0; i <3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] >= '1' && a[i][j] <= '9')
				return 0;
		}
	}
	return 1;
}
int main()
{
	int scoreOfPlayer1 = 0;
	int scoreOfPlayer2 = 0;
	char p1;
	char p2;
	do
	{
		printf("Enter For player 1 >");
		scanf("%c", &p1);
	    getchar();
		if (p1 >= '0' && p1 <= '9')
			printf("Do not Select Digit\n");
	} while (p1 >= '0' && p1 <= '9');
	do
	{
		printf("Enter For player 2 >");
		scanf("%c", &p2);
		getchar();
		if (p2 >= '1' && p2 <= '9')
			printf("Do not Select Digit\n");
	} while (p2 >= '1' && p2 <= '9');
	char a[3][3] = { 
					{'1','2','3'},
					{'4','5','6'},
					{'7','8','9'}
	};
	system("cls");
	display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
	puts("*******************");
	for (int time = 0; time < 10; time++)
	{
		for (int i = 0; i <3; i++)
		{
			int checkFill;
			puts("play player1");
			proceding(a, p1);
			system("cls");
			display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
			checkFill = status(a);
			if (checkFill == 1)
			{
				system("cls");
				printf("Draw\n");
				Sleep(1000);
				system("cls");
				reset(a);
				display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
				break;
			}
			int conc = conclusion(a);
			if (conc == 1)
			{
				scoreOfPlayer1++;
				reset(a);
				system("cls");
				puts("New");
				display(a, scoreOfPlayer1, scoreOfPlayer2,p1,p2);
				break;
				
			}
			puts("play player2");
			proceding(a, p2);
			system("cls");
			display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
			checkFill = status(a);
			if (checkFill == 1)
			{
				system("cls");
				printf("Draw\n");
				Sleep(1000);
				system("cls");
				reset(a);
				display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
				break;
			}
			conc = conclusion(a);
			if (conc == 1)
			{
				scoreOfPlayer2++;
				reset(a);
				system("cls");
				puts("New");
				display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
				break;
			}
		}
	}

			return 0;
}
