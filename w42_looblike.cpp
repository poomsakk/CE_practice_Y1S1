#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[10100];
int main()
{
	int n, i, input, max = -1, maxNub, maxi, count=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &input);
		a[input]++;
	}
	for (i = 1; i <= 10000; i++)
		if (a[i] > max)
		{
			max = a[i];
			maxi = i;
		}
	for (i = 1; i <= 10000; i++)
		if (a[i] == max)
			printf("%d ", i);
	return 0;
}