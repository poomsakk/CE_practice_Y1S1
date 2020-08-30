#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[2020];
int main()
{
	int i, x, j, plus=-1;
	for (i = 1; i < 2000; i += 2)
	{
		a[i] = a[i + 1] = plus;
		plus += 2;
	}
	scanf("%d", &x);
	if (x == 1)
	{
		printf("*");
		return 0;
	}
	else if (x == 2)
	{
		printf("*\n*");
		return 0;
	}
	else if (x <= 0)
	{
		return 0;
	}
	x -= 1;
	for (i = 1; i <= x / 2; i++)//head1
		printf("-");
	printf("*");
	for (i = 1; i <= x / 2; i++)//end Head1
		printf("-");
	printf("\n");
	for (i = 1; i < x / 2  ; i++)//top
	{
		for (j = i; j <x/2 ; j++)
			printf("-");
		printf("*");
		for (j = 1; j < 2 * i; j++)
			printf("-");
		printf("*");
		for (j = i; j < x / 2; j++)
			printf("-");
		printf("\n");//end top
	}
	if (x % 2 == 1)
	{
		printf("*");//mid
		for (i = 1; i <= a[x + 1]; i++)
			printf("-");
		printf("*");//end mid
		printf("\n");
	}
	for (i = x/2; i >= 1; i--)//bot
	{
		for (j = x/2; j > i; j--)
			printf("-");
		printf("*");
		for (j = 2 * i; j > 1; j--)
			printf("-");
		printf("*");
		for (j = x / 2; j > i; j--)
			printf("-");
		printf("\n");//end bot
	}
	for (i = 1; i <= x / 2; i++)//head2
		printf("-");
	printf("*");
	for (i = 1; i <= x / 2; i++)//end Head2
		printf("-");
	printf("\n");
	return 0;
}
