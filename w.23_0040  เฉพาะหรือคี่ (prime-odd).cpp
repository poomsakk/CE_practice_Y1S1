#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int a[20];
char c[1010];
int main() {
	int i, n, len;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%s",c);
		len = strlen(c);
		if (len == 1 && c[0] =='2')
			a[i] = 1;
		else {
			if ((c[len - 1] - '0') % 2 == 0)
				a[i] = 2;
			else
				a[i] = 1;
		}
		memset(c, 0, sizeof c);
	}
	for (i = 0; i < n; i++) {
		if (a[i] == 1)
			printf("T");
		else if (a[i] == 2)
			printf("F");
		if (i < n - 1)
			printf("\n");
	}
	return 0;
}
