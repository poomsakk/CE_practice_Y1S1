#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n,i=2;
	printf("Enter number : ");
	scanf("%d", &n);
	printf("\nFactoring result : ");
	while (n != 1) {
		if (n % i == 0) {
			n /= i;
			if (n != 1)		printf("%d x ", i);
			else			printf("%d", i);
		}
		else   i++;
	}
	return 0;
}