#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char a[30][30];
int brick[30];
int main()
{
	int row, colum,  i, j;
	scanf("%d %d", &row, &colum);
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colum; j++)
		{
			scanf(" %c", &a[i][j]);
		}
	}
	for (i = 0; i < colum; i++)
		scanf("%d", &brick[i]);

	for (i = 0; i < colum; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (a[j][i] == 'O')
			{
				for (int m = brick[i]; m > 0; m--)
				{
					if (j - m >= 0)
						a[j - m][i] = '#';
				}
				break;
			}
			else if (a[j][i] == '.' && j == row - 1)
			{
				for (int s = brick[i]; s > 0; s--)
				{
					if (j - s + 1>= 0)
						a[j - s + 1][i] = '#';
				}
			}
		}
	}

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < colum; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}