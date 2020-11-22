#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char a[1010][31];
void swap(char* x, char* y)
{
	char temp[31];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y, temp);
}
int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf(" %s", &a[i]);
		for (j = 1; j <= i; j++)
			for(k=0;k<=n-j;k++)
				if (strcmp(a[k], a[k + 1]) < 0)
					swap(a[k], a[k + 1]);
	}

	for (i = n - 1; i >= 0; i--)
		if (strcmp(a[i], a[i - 1]) != 0)
			printf("%s\n", a[i]);
	return 0;
}