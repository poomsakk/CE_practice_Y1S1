#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n,i,j;
	printf("Enter number : ");
	scanf("%d", &n);
	if (n == 1) {
		printf("*");
		return 0;
	}
	for (i = 1; i <= n; i++)	
		printf("*");
	printf("\n");
	for (i = 1; i <= n - 2; i++) {
		for (j = 1; j <= n; j++) {
			if (j == 1 || j == n)	printf("*");
			else					printf(" ");
		}
		printf("\n");
	}
	for (i = 1; i <= n; i++)
		printf("*");
	return 0;
}