#include <stdio.h>
#include <math.h>

void nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
}

float xuat(float a[], int n) {
	if (n == 0) 
		return a[0];
	return fmax(a[n - 1], xuat(a, n - 1));
}

int main() {
	float a[100];
	nhap(a, 5);
	printf("%.1f", xuat(a, 5));
	return 0;
}
