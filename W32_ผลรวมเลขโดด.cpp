#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int find(int x)
{
	int n = 0;
	while (x != 0)
	{
		n += x % 10;
		x /= 10;
	}
	if (n > 9)
		return find(n);
	else
		return n;
}
int main()
{
	int x;
	scanf("%d", &x);
	printf("%d", find(x));
	return 0;
}
