#include <stdio.h>


void nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
}

int xuat(float a[], int n) {
	if (n - 1 == 0) {
		if (a[n - 1] < 0)
			return 1;
		return 0;
	} else {
		if (a[n - 1] < 0) 
			return xuat(a, n - 1);
		return 0;
	}
}

int main() {
	float a[100];
	nhap(a, 5);
	if (xuat(a, 5)) {
		printf("Toan bo mang co gia tri am");
	} else {
		printf("Mang co gia tri duong");
	}
	return 0;
}

