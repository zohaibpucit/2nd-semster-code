#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
void OnePlayerGame(int OVERS) {
	int sum = 0;
	int* ball = (int*)calloc(OVERS * 6, sizeof(int));
	int players;
	int fixed;
	int a = 0;
	int out = rand() % 3;
	players = rand() % 4 + 2;
	fixed = 8 * OVERS;
	int target = rand() % 15 + fixed;
	printf("Computer Targeted You %d\n", target); Sleep(50);
	printf("Your team Players \n"); Sleep(50);
	for (int i = 1; i <= players; i++)
	{
		printf("%c%c.%c\n", 77, 114, 64 + i); Sleep(50);
	}
	int i = 0, j;
	for (j = 1; j <= players; j++)
	{
		for (i; i < 6 * OVERS; i++)
		{
			if (sum < target)
			{
				printf("play %c%c.%c from {ENTER-key}", 77, 114, j + 64); Sleep(50);
				getchar();
				a = rand() % 8;
				if (a == 7 && out == 0)
				{
					printf("\t\t\t\t\t\t\t\t\t\t\t Caught Out  %c%c.%c \n", 77, 114, j + 64); Sleep(50);
					out = rand() % 3;
					break;
				}
				else if (a == 7 && out == 1)
				{
					printf("\t\t\t\t\t\t\t\t\t\t\t Boled Out %c%c.%c \n", 77, 114, j + 64); Sleep(50);
					out = rand() % 3;
					break;
				}
				else if (a == 7 && out == 2)
				{
					printf("\t\t\t\t\t\t\t\t\t\t\tRun OUT %c%c.%c \n", 77, 114, j + 64); Sleep(50);
					out = rand() % 3;
					break;
				}
				else
				{
					ball[i] = a;
					sum = sum + ball[i];
					printf("%c%c.%c made %d runs\n", 77, 114, j + 64, ball[i]); Sleep(50);
					if (ball[i] == 4 || ball[i] == 6)
					{

						printf("\t\t\t\t\t\tWHAT A GREAT SHORT \n"); Sleep(50);
						if (ball[i] == 6)
						{
							printf("\t\t\t\t\t\tMagnificient SIXER  \n\n"); Sleep(50);
							
							printf("                                                             \\('_')/\n"); Sleep(50);
							printf("                                     Magnificient SIXER        |-|        \n "); Sleep(50);
							printf("                                                             _/ \\_\n"); Sleep(50);
						}
					}
				}
			}
			if (sum < target)
			{
				printf("\t\t\t\t\t\t\t\t\t\t\t ________________________\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|Need %2d runs in %2d balls|\n", target - sum, 6 * OVERS - i - 1); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|________________________|\n"); Sleep(50);

			}
			if (target <= sum)
			{
				break;
			}
		}
	}


	printf("\n\n\n  RUNS THIS ROUND\n"); Sleep(50);
	printf("ball\t|\truns\n");
	for (int i = 0; i < OVERS * 6; i++)
	{
		printf("%d\t|\t%d\n", i + 1, ball[i]); Sleep(50);
	}
	if (target <= sum)
	{
		printf("      Score ~~%d\n", sum); Sleep(50);
		printf("CONGRATULATIONS you WON \n"); Sleep(50);
		printf("                                    \\('_')/\n"); Sleep(50);
		printf("                                      |-|     WINNER    \n "); Sleep(50);
		printf("                                    _/ \\_\n"); Sleep(50);
	}
	if (sum < target)
	{
		printf("     Computer  Score  ~~%d\n", target); Sleep(50);
		printf("     Your team Score  ~~%d\n", sum); Sleep(50);
		printf("YOU LOSSED  by %d runs \n", target - sum); Sleep(50);
		printf("                                     ('_')\n"); Sleep(50);
		printf("                                     /|-|\\  LOSSER      \n "); Sleep(50);
		printf("                                    _/ \\_\n"); Sleep(50);
	}

}
int toss()
{
	srand(time(0));
	char key;
	int choise = rand() % 2;
	printf("Captan of team 1 rolled coin\n");
	Sleep(50);
	printf("what would like to chose for team 2\n");
	Sleep(50);
	printf("Enter character (h) for Head\n");
	Sleep(50);
	printf("Enter character (t) for Tail\n");
	Sleep(50);
	printf("Enter>>");
	scanf("%c", &key);
	getchar();
	getchar();
	return choise;


}
void tossResult(int coin)
{
	if (coin == 1) {
		Sleep(50);
		printf("TEAM 2 won The toss\n");
		Sleep(50);
		printf("teem 2 is on batting\n");
	}

	else
	{
		Sleep(50);
		printf("TEAM 2 LOSSED toss\n");
		Sleep(50);
		printf("teem 1 is on batting\n");
	}

}
void separation()
{

	printf("                         ");
	for (int x = 1; x < 10; x++)
	{
		printf("*");
		Sleep(100);
	}
	printf("OPPONENT TEAM");
	for (int x = 1; x < 10; x++)
	{
		printf("*");
		Sleep(100);
	}
	printf("\n");
}
void displayTargetLine()
{
	printf("T");
	Sleep(100);
	printf("h");
	printf("e ");
	Sleep(100);
	printf("T");
	Sleep(100);
	printf("a");
	Sleep(100);
	printf("r");
	Sleep(100);
	printf("g");
	Sleep(100);
	printf("e");
	Sleep(100);
	printf("t ");
	Sleep(100);
	printf("is>> ");
	Sleep(100);

}
void displayingTeams(int nOfPlayers)
{
	system("color 10");

	printf("From first team following  player will will play\n");
	for (int i = 1; i <= nOfPlayers; i++)
	{
		printf("%c%c.%c\n", 77, 114, 64 + i);
		Sleep(50);

	}
	printf("From Second team following player will will play\n");
	for (int i = 1; i <= nOfPlayers; i++)
	{
		printf("%c%c.%c\n", 77, 114, 74 + i);
		Sleep(50);

	}
}
void twoPlayersMatch(int OVERS)
{
	int nOfPlayers;
	char choise;
	char coin;
	int startOfPlayer;
	printf("Enter Number of player>>");
	scanf("%d", &nOfPlayers);
	displayingTeams(nOfPlayers);
	int tossi = toss();
	tossResult(tossi);
	if (tossi == 0)
		startOfPlayer = 64;
	else
		startOfPlayer = 74;

	int j;
	int i = 0;
	int sum = 0;
	int* ball = (int*)malloc(OVERS * 6 * sizeof(int));
	for (j = 1; j <= nOfPlayers; j++)
	{
		int out = rand() % 3;

		int temp = sum;
		int individualBalls = 0;
		for (i; i < 6 * OVERS; i++)
		{
			system(" color F0");
			printf("play %c%c.%c from {ENTER-key}", 77, 114, j + startOfPlayer);
			getchar();
			individualBalls++;
			int a = rand() % 8;

			if (a == 7 && out == 0)
			{
				printf("\t\t\t\t\t\t\t\t\t\t\t Caught Out  %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d int balls %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;

			}
			else if (a == 7 && out == 1)
			{
				Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t Boled Out %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d int balls %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;
			}
			else if (a == 7 && out == 2)
			{

				printf("\t\t\t\t\t\t\t\t\t\t\t Run OUT %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d inballs %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;
			}
			else
			{
				ball[i] = a;
				sum = sum + ball[i];
				Sleep(50);
				printf("%c%c.%c made %d runs\n", 77, 114, j + startOfPlayer, ball[i]);	Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t ______________________________\n");
				Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|team sore %2d runs in %2d balls |\n", sum, i + 1);
				Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|______________________________|\n"); Sleep(50);
				if (ball[i] == 4 || ball[i] == 6)
				{

					printf("\t\t\t\t\t\tWHAT A GREAT SHORT \n"); Sleep(50);
					if (ball[i] == 6)
					{
						printf("\t\t\t\t\t\tMagnificient SIXER  \n\n"); Sleep(50);
						printf("                                                             \\('_')/\n"); Sleep(50);
						printf("                                     Magnificient SIXER        |-|        \n "); Sleep(50);
						printf("                                                             _/ \\_\n"); Sleep(50);
					}
				}
			}
		}

	}
	printf("Winding Up match");
	for (int z = 1; z < 6; z++)
	{
		Sleep(1000);
		printf(".");
	}
	printf("\n");
	system("cls");
	displayTargetLine();
	int target = sum + 1;
	printf("%d\n ", target);
	separation();
	i = 0;
	sum = 0;
	if (tossi == 0)
		startOfPlayer = 74;
	else
		startOfPlayer = 64;
	for (j = 1; (j <= nOfPlayers) && sum < target; j++)
	{
		int out = rand() % 3;
		int temp = sum;
		int individualBalls = 0;
		for (i; i < 6 * OVERS; i++)
		{
			printf("play %c%c.%c from {ENTER-key}", 77, 114, j + startOfPlayer); Sleep(50);
			getchar();
			individualBalls++;
			int a = rand() % 8;

			if (a == 7 && out == 0)
			{
				printf("\t\t\t\t\t\t\t\t\t\t\t Caught Out  %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n");
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d in balls %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;

			}
			else if (a == 7 && out == 1)
			{

				printf("\t\t\t\t\t\t\t\t\t\t\t Bold Out %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d in balls %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;
			}
			else if (a == 7 && out == 2)
			{

				printf("\t\t\t\t\t\t\t\t\t\t\t Run OUT %c%c.%c \n", 77, 114, j + startOfPlayer); Sleep(50);
				if (individualBalls == 1 || (sum - temp) == 0)
					printf("\t\t\t\t\t\t\t\t\t\t\t Golden DUCK\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t score of %c%c.%c is %d in balls %d\n", 77, 114, j + startOfPlayer, sum - temp, individualBalls); Sleep(50);
				i++;
				break;
			}
			else
			{
				ball[i] = a;
				sum = sum + ball[i];
				printf("%c%c.%c made %d runs\n", 77, 114, j + startOfPlayer, ball[i]); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t ______________________________\n"); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|team sore %2d runs in %2d balls |\n", sum, i + 1); Sleep(50);
				printf("\t\t\t\t\t\t\t\t\t\t\t|______________________________|\n"); Sleep(50);
				if (sum > target)
					break;
				if (ball[i] == 4 || ball[i] == 6)
				{

					printf("\t\t\t\t\t\tWHAT A GREAT SHORT \n"); Sleep(50);
					if (ball[i] == 6)
					{
						printf("\t\t\t\t\t\tMagnificient SIXER  \n\n"); Sleep(50);
						printf("                                                             \\('_')/\n"); Sleep(50);
						printf("                                     Magnificient SIXER        |-|        \n "); Sleep(50);
						printf("                                                             _/ \\_\n"); Sleep(50);
					}
				}
			}
		}

	}
	printf("\n\n");
	printf("Preparing Conclusion");
	for (int z = 1; z < 6; z++)
	{
		Sleep(1000);
		printf(".");
	}
	printf("\n");
	system("cls");
	system("color 47");
	printf("\n\n\n\n\n\n\n\n\n");
	if (sum > target)
	{
		if (tossi == 0)
		{
			printf(" team  2 has WON\n");
			printf("********  ******     *     *       *       *****     *        *  *****   *        *     *        *    *****   ******         \n"); Sleep(100);
			printf("   *      *         * *    * *   * *      *     *    *    *   *    *     * *      *     * *      *    *       *     *    \n"); Sleep(100);
			printf("   *      ******   *   *   *   *   *           *     *  *  *  *    *     *   *    *     *   *    *    *****   ******      \n"); Sleep(100);
			printf("   *      *       *******  *       *         *       * *    * *    *     *      * *     *      * *    *       *  *         \n"); Sleep(100);
			printf("   *      ****** *       * *       *      ********   *        *  *****   *        *     *        *    *****   *     *            \n"); Sleep(100);
			printf("               \\('_')/     \\('_')/   \\('_')/       \\('_')/        \\('_')/           \\('_')/\n"); Sleep(100);
			printf("                 |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("                |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("               _/ \\_       _/ \\_     _/ \\_         _/ \\_          _/ \\_             _/ \\_                      \n"); Sleep(100);
		}
		else
		{
			printf("TEAM 1 has Won\n");
			printf("********  ******     *     *       *         *      *        *  *****   *        *     *        *    *****   ******         \n"); Sleep(100);
			printf("   *      *         * *    * *   * *      *  *      *    *   *    *     * *      *     * *      *    *       *     *    \n"); Sleep(100);
			printf("   *      ******   *   *   *   *   *         *      *  *  *  *    *     *   *    *     *   *    *    *****   ******      \n"); Sleep(100);
			printf("   *      *       *******  *       *         *      * *    * *    *     *      * *     *      * *    *       *  *         \n"); Sleep(100);
			printf("   *      ****** *       * *       *       *****    *        *  *****   *        *     *        *    *****   *     *            \n"); Sleep(100);
			printf("               \\('_')/     \\('_')/   \\('_')/       \\('_')/        \\('_')/           \\('_')/\n"); Sleep(100);
			printf("                 |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("                |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("               _/ \\_       _/ \\_     _/ \\_         _/ \\_          _/ \\_             _/ \\_                      \n"); Sleep(100);
		}

	}
	else
	{
		if (tossi == 0)
		{
			printf("TEAM 1 has Won\n");
			printf("********  ******     *     *       *         *      *        *  *****   *        *     *        *    *****   ******         \n"); Sleep(100);
			printf("   *      *         * *    * *   * *      *  *      *    *   *    *     * *      *     * *      *    *       *     *    \n"); Sleep(100);
			printf("   *      ******   *   *   *   *   *         *      *  *  *  *    *     *   *    *     *   *    *    *****   ******      \n"); Sleep(100);
			printf("   *      *       *******  *       *         *      * *    * *    *     *      * *     *      * *    *       *  *         \n"); Sleep(100);
			printf("   *      ****** *       * *       *       *****    *        *  *****   *        *     *        *    *****   *     *            \n"); Sleep(100);
			printf("               \\('_')/     \\('_')/   \\('_')/       \\('_')/        \\('_')/           \\('_')/\n"); Sleep(100);
			printf("                 |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("                |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("               _/ \\_       _/ \\_     _/ \\_         _/ \\_          _/ \\_             _/ \\_                      \n"); Sleep(100);
		}

		else
		{
			printf(" team  2 has WON\n");
			printf("********  ******     *     *       *       *****     *        *  *****   *        *     *        *    *****   ******         \n"); Sleep(100);
			printf("   *      *         * *    * *   * *      *     *    *    *   *    *     * *      *     * *      *    *       *     *    \n"); Sleep(100);
			printf("   *      ******   *   *   *   *   *           *     *  *  *  *    *     *   *    *     *   *    *    *****   ******      \n"); Sleep(100);
			printf("   *      *       *******  *       *         *       * *    * *    *     *      * *     *      * *    *       *  *         \n"); Sleep(100);
			printf("   *      ****** *       * *       *      ********   *        *  *****   *        *     *        *    *****   *     *            \n"); Sleep(100);
			printf("               \\('_')/     \\('_')/   \\('_')/       \\('_')/        \\('_')/           \\('_')/\n"); Sleep(100);
			printf("                 |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("                |-|         |-|       |-|           |-|            |-|               |-|        \n "); Sleep(100);
			printf("               _/ \\_       _/ \\_     _/ \\_         _/ \\_          _/ \\_             _/ \\_                      \n"); Sleep(100);
		}

	}
	for (int i = 0; i < 100; i++)
	{
		Sleep(100);
		system("color F0");
		Sleep(100);
		system("color 60");
		Sleep(100);
		system("color C0");
		Sleep(100);
		system("color 08");
		Sleep(100);
		system("color 19");
		Sleep(100);
		system("color 23");


	}

}
int main()
{
	system("color A0");
	printf("Full The Size Of OUTPUT Screen before you play\t\t\t\t\t\t\t\t\t^\n");
	Sleep(50);
	printf("ATIZOOM the size of text to 3/4 of SCREEN\n");
	Sleep(50);
	printf("SO that you Better ENJOY\n");
	Sleep(50);
	printf("Press ENTER after you have DONE\n");
	getchar();
	srand(time(0));
	for (int i = 1; i < 10; i++)
	{
		printf("*");
		Sleep(50);
	}
	Sleep(50);
	printf("single player (OR) double Player");
	system("color 40");

	for (int i = 1; i < 10; i++)
	{
		printf("*");
		Sleep(50);
	}
	printf("\n");
	Sleep(50);
	for (int i = 1; i < 15; i++)
	{
		printf("*");
		Sleep(50);
	}
	Sleep(50);
	for (int i = 1; i < 10; i++)
	{
		printf(".");
		Sleep(100);
	}
	Sleep(50);
	printf("Game");
	for (int i = 1; i < 10; i++)
	{
		printf(".");
		Sleep(50);
	}
	for (int i = 1; i < 15; i++)
	{
		printf("*");
		Sleep(50);
	}
	printf("\n");
	Sleep(50);
	printf("For Single player press 1\n");
	Sleep(50);
	printf("For double Player press 2\n");
	int team;
	system("color 80");

	do
	{
		printf("Enter Choice>>");
		scanf("%d", &team);
		getchar();
		if (team < 1 || team>2) {
			printf("Enter Valid Number\n");
			Beep(760, 800);
		}
	} while (team < 1 || team>2);
	int OVERS;
	printf("Enter Numbers Of Overs >");
	scanf("%d", &OVERS);
	getchar();

	if (team == 1)
		OnePlayerGame(OVERS);
	else
		twoPlayersMatch(OVERS);
	return 0;


}