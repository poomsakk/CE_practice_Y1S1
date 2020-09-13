#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct ball
{
	char name[21];
	int score,win,lose;
};
int score[5][5];
int main()
{
	int i, j, k;
	ball team[5];
	for (i = 1; i <= 4; i++)
	{
		team[i].score = 0;
		team[i].win = 0;
		team[i].lose = 0;
	}
	for (i = 1; i <= 4; i++)
		scanf("%s", team[i].name);
	for (i = 1; i <= 4; i++)
		for (j = 1; j <= 4; j++)
			scanf("%d", &score[i][j]);

	for (i = 1; i <= 4; i++)//find score
		for (j = 1; j <= 4; j++)
			if (i != j)
			{
				if (score[i][j] > score[j][i])
					team[i].score += 3;
				else if (score[i][j] == score[j][i])
					team[i].score += 1;
			}
	for (i = 1; i <= 4; i++)//find win goal
		for (j = 1; j <= 4; j++)
			team[i].win += score[i][j];
	
	for (j = 1; j <= 4; j++)//find lose goal
		for (i = 1; i <= 4; i++)
			team[j].lose += score[i][j];

	for (i = 1; i <= 4; i++) //sort
	{
		for (j = 1; j <= 3; j++)
		{
			if (team[j].score < team[j + 1].score)//check 1
			{
				ball temp = team[j];
				team[j] = team[j + 1];
				team[j + 1] = temp;
			}
			else if (team[j].score == team[j + 1].score)//check 2										
			{
				if (team[j].win - team[j].lose < team[j + 1].win - team[j + 1].lose)
				{
					ball temp = team[j];
					team[j] = team[j + 1];
					team[j + 1] = temp;
				}
				else if (team[j].win - team[j].lose == team[j + 1].win - team[j + 1].lose)//check 3
				{
					if (team[j].win < team[j + 1].win)
					{
						ball temp = team[j];
						team[j] = team[j + 1];
						team[j + 1] = temp;
					}
				}
			}
		}
	}
	for (i = 1; i <= 4; i++)
		printf("%s %d\n", team[i].name, team[i].score);

	return 0;
}