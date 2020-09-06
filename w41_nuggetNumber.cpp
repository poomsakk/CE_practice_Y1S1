#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int a[120];
int nugget(int n)
{
	if (n > 100)
		return 0;
	a[n] = 1;
	return nugget(n + 6) || nugget(n + 9) || nugget(n + 20);
}
int main()
{
	int num,i;
	scanf("%d", &num);
	nugget(0);
	if (num>5)
		for (i = 1; i <= num; i++)
		{
			if (a[i] == 1)
				printf("%d\n", i);
		}
	else
		printf("no");
	return 0;
}