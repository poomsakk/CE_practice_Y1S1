#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char ans[2020];
int main()
{
	int i = 0, x, a, len;
	scanf("%d", &x);
	while (x!=0)
	{
		a = x % 16;
		if (a <= 9)
			ans[i] = a + '0';
		else
			ans[i] = a + 55;
		x /= 16;
		i++;
	}
	len = strlen(ans);
	for (i = len - 1; i >= 0; i--)
		printf("%c", ans[i]);
	return 0;
}
