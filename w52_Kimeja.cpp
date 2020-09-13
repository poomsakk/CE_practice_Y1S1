#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
	int i, len;
	scanf("%[^'\n']", a);
	len = strlen(a);
	for (i = 0; i < len; i++)
	{
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o'||a[i] == 'u')
		{
			printf("%c", a[i]);
			i += 2;
		}
		else
		{
			printf("%c", a[i]);
		}
	}
	return 0;
}