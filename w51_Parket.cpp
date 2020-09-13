#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>
int x[12], y[12], bi[12];
int abss(int x)
{
	if (x >= 0)
		return x;
	else
		return -x;
}
void decimalToBinary(int x)
{
	memset(bi, 0, sizeof bi);
	int i = 1;
	while (x > 0)
	{
		bi[i] = x % 2;
		x /= 2;
		i++;
	}
}
int main()
{
	int n, i, count,sum,multi,min=1000000001;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d %d", &x[i], &y[i]);
	for (count = 1; count < pow(2, n); count++)
	{
		decimalToBinary(count);
		sum = 0;
		multi = 1;
		for (i = 1; i <= n; i++)
		{
			if (bi[i] == 1)
			{
				sum += y[i];
				multi *= x[i];
			}
		}
		if (min > abss(sum - multi))
			min = abss(sum - multi);
	}
	printf("%d", min);
	return 0;
}