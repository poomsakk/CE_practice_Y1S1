#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a,b,i;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	for (i = a; i >= 0; i--) {
		if (a % i == 0 && b % i == 0)
			break;
	}
	printf("Greatest common divisor : %d",i);
	return 0;
}