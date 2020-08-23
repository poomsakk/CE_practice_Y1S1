#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,n,a[100000],j,k;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		for (j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	for (i = 0; i < n-1; i++) {
		if (a[i] == 0 && a[i + 1] != 0) {
			a[0] = a[i + 1];
			a[i + 1] = 0;
			break;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	return 0;
}
