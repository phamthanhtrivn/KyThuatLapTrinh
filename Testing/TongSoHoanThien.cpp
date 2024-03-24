#include <stdio.h>


int tonguoc(int n) {
	int tong  = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	return tong - n;
}

void sohoanthien(int a[], int n) {
	int ok = 0;
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (tonguoc(a[i]) == a[i]) {
			tong += a[i];
			ok = 1;
		}
	}
	printf("%d", tong);
	if (ok == 0) {
		printf("0");
	}
}


int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	sohoanthien(a, n);
	return 0;
}
