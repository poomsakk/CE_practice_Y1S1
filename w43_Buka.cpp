#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char a[1010], b[1010], op;
int main()
{
	int lena, lenb;
	scanf("%s %c %s", a, &op, b);
	lena = strlen(a);
	lenb = strlen(b);
	if (op == '+')
	{
		if (lena >= lenb)
		{
			a[lena - lenb]++;
			printf("%s", a);
			return 0;
		}
		else
		{
			b[lenb - lena]++;
			printf("%s", b);
			return 0;
		}
	}
	else if (op == '*')
	{
		if (lena == 1)
		{
			printf("%s", b);
			return 0;
		}
		else if (lenb == 1)
		{
			printf("%s", a);
			return 0;
		}
		printf("%s",a);
		for (int i = 1; i < lenb; i++)
			printf("0");
	}
	return 0;
}