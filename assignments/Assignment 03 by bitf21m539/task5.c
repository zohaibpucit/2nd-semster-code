#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//this function check if cosective symbles of players come horizontally ,vertically and so on....
int conclusion(char a[3][3])
{
	if ((a[0][0] == a[0][1]) && (a[0][1] == a[0][2]) && a[0][0]!='0')
		return 1;
	else 	if ((a[1][0] == a[1][1]) && (a[1][1] == a[1][2]) && a[1][0] != '0')
		return 1;
	else 	if ((a[0][0] == a[1][1]) && (a[1][1] == a[2][2]) && a[0][0] != '0')
		return 1;
	else 	if ((a[2][0] == a[2][1]) && (a[2][1] == a[2][2]) && a[2][0] != '0')
		return 1;
	else 	if ((a[0][0] == a[1][0]) && (a[1][0] == a[2][0]) && a[0][0] != '0')
		return 1;
	else 	if ((a[0][1] == a[1][1]) && (a[1][1] == a[2][1]) && a[0][1] != '0')
		return 1;
	else 	if ((a[0][2] == a[1][2]) && (a[1][2] == a[2][2]) && a[0][2] != '0')
		return 1;
	else 	if ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]) && a[0][2] != '0')
		return 1;
	else if ((a[0][2] == a[1][1]) && (a[1][1] == a[2][0]) && a[0][2] != '0')
		return 1;
	else
		return 0;


}
//this is maximum code of actual game
void proceding(char a[3][3], char p1)
{

	int nRow=0;
	int nColum=0;
	char* ptr;
	do {

		//entering row index
		printf("Enter Row Index >");
		do
		{
			scanf("%d", &nRow);
			getchar();
			if (nRow > 3 || nRow < 1)
				printf("Enter Valid Row Index >");
		} while (nRow > 3 || nRow <1);
		//entering colum index
		printf("Enter Colum Index >");
		do
		{
			scanf("%d", &nColum);
			getchar();
			if (nColum > 3 || nColum < 1)
				printf("Enter Valid Colum Index >");
		} while (nColum > 3 || nColum < 1);
		nRow--;
		nColum--;
		//storing required elemts' adress
		ptr = &a[nRow][nColum];
		if (*ptr != '0')
			printf("Already filled\n");//if already filled
	} while (*ptr != '0');//again looping
	*ptr = p1;//if not empty entering players' symble
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c ", a[i][j]);//displying elements
		}
		puts("");
	}

}
//this function display all which is seeing
void display(char a[3][3], int s1, int s2, char p1, char p2)
{
	printf("                                             %c >  player 1 Score:%d\n", p1, s1);
	printf("                                             %c >  player 2 Score:%d\n", p2, s2);
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
//this function reset all array elements after match is draw or player is won 
void reset(char* a)
{
	for (int i = 0; i < 9; i++)
	{
		*a = '0';
		a++;
	}

}
//this function tells status if any element is empty or not
int status(char a[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] == '0')
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
	//Taking Player 1 Symble
	do
	{
		printf("Enter For player 1 >");
		scanf("%c", &p1);
		getchar();
		if (p1 >= '0' && p1 <= '9')
			printf("Do not Select Digit\n");
	} while (p1 >= '0' && p1 <= '9');
	//Taking Player 2 Symble
	do
	{
		printf("Enter For player 2 >");
		scanf("%c", &p2);
		getchar();
		if (p2 >= '1' && p2 <= '9')
			printf("Do not Select Digit\n");
	} while (p2 >= '1' && p2 <= '9');
	//inializing by zero
	char a[3][3] = {
					{'0','0','0'},
					{'0','0','0'},
					{'0','0','0'}
	};
	system("cls");//clear screen
	display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);//displaying which is seeing
	puts("*******************");
	for (int time = 0; time < 10; time++)//maximum wining score of player
	{
		for (int i = 0; i < 3; i++)
		{
			int checkFill;
			puts("play player1");
			proceding(a, p1);
			system("cls");
			display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
			checkFill = status(a);
			if (checkFill == 1)//if all elements are fill
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
			if (conc == 1)//if player one wins
			{
				scoreOfPlayer1++;
				reset(a);
				system("cls");
				puts("New");
				display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
				break;

			}
			puts("play player2");//PLAYER 2
			proceding(a, p2);
			system("cls");
			display(a, scoreOfPlayer1, scoreOfPlayer2, p1, p2);
			checkFill = status(a);
			if (checkFill == 1)//if all elements are filled
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
			if (conc == 1)//if player 2 wins
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
