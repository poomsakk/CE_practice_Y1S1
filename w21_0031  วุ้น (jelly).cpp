#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c,max,count = 0;
	scanf("%d %d %d", &a, &b, &c);
	while (1) {
		if (a == 1 && b == 1 && c == 1)	break;
		max = -1;
		if (a > max && a != 1) max = a;
		if (b > max && b != 1) max = b;
		if (c > max && c != 1) max = c;
		if (max == a && a != 1) {
			if (a % 2 == 1) {
				a--;
				a /= 2;
			}
			else a /= 2;
		}
		else if (max == b && b != 1) {
			if (b % 2 == 1) {
				b--;
				b /= 2;
			}
			else b /= 2;
		}
		else if (max == c && c != 1) {
			if (c % 2 == 1) {
				c--;
				c /= 2;
			}
			else c /= 2;
		}
		count++;
	}
	printf("%d", count);
	return 0;
}
