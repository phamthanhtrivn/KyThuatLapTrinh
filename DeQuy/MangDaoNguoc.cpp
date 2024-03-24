#include <stdio.h>


void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n) {
	if (n == 0) 
		return;
	printf("%d ", a[n - 1]);
	xuat(a, n - 1);
}

int main() {
	int a[100];
	nhap(a, 5);
	xuat(a, 5);
	return 0;
}

