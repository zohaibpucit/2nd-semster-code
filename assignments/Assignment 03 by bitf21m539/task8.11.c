#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	srand(time(0));
	char sentence[20][100] = { "\0" };//for storing sentence
	char* article[5] = { "the","a","one","some","any" };
	char* noun[5] = {"boy","girl","dog","town","car"};
	char* verb[5] = {"drove","jumped","ran","walked","skipped"};
	char* preposition[5] = {"to","from","over","under","on"};
	for (int i = 0; i < 20; i++)
	{
		int a = rand() % 5;//random number
		int b = rand() % 5;//randon number
		strcat(sentence[i], article[a]);//mixing artical
		*sentence[i] = *sentence[i] - 32;//capitalizing its first alphabet
		strcat(sentence[i], " ");//adding space
		strcat(sentence[i], noun[a]);//combining noun
		strcat(sentence[i], " ");  //adding space
		strcat(sentence[i], verb[a]);//combining verb
		strcat(sentence[i], " ");//adding space
		strcat(sentence[i], preposition[a]);//combining preposition
		strcat(sentence[i], " ");//adding space
		strcat(sentence[i], article[b]);//combing article
		strcat(sentence[i], " ");//adding space
		strcat(sentence[i], noun[b]);//concatinating noun
		strcat(sentence[i], ".");//add . at last
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%2d. %s\n",i+1, sentence[i]);//printing sentence
	}

	return 0;
}
