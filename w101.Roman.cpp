#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i, v, x, l, c;
void calculate(int n)
{
	int colum = 1;
	while (n != 0)
	{
		int s = n % 10;
		switch (colum)
		{
		case 1://หลัักหน่วย
			if (s <= 3)
				i += s;
			else if (s == 4)
			{
				i++;
				v++;
			}
			else if (s <= 8)
			{
				v++;
				i += s - 5;
			}
			else if (s == 9)
			{
				i++;
				x++;
			}
			break;
		case 2://หลักสิบ
			if (s <= 3)
				x += s;
			else if (s == 4)
			{
				x++;
				l++;
			}
			else if (s <= 8)
			{
				l++;
				x += s - 5;
			}
			else if (s == 9)
			{
				x++;
				c++;
			}
			break;
		case 3://หลักร้อย
			if (s <= 3)
				c += s;
			break;
		}
		colum++;
		n /= 10;
	}
}
int main()
{
	int d;
	scanf("%d",&d);
	for (int i = 1; i <= d; i++)
		calculate(i);
	printf("%d %d %d %d %d", i, v, x, l, c);
	return 0;
}