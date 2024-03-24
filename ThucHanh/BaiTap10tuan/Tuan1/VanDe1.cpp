#include <stdio.h>
#include <math.h>

long tong(int n) {
	if (n == 0)
		return 0;
	return n + tong(n-1);
}

long tich(int n) {
	if (n == 1)
		return 1;
	return n * tich(n-1);
}

double luythua(float a, int n) {
	if  (n == 0) 
		return 1;
	return a * luythua(a, n - 1);
}

int main() {
	int n;
	float a;
	printf("n = ");
	scanf("%d", &n);
	printf("a = ");
	scanf("%f", &a);
	if (n < 0) {
		printf("Du lieu khong hop le. Nhap lai gia tri n");
	} else {
		printf("S(%d) = %ld \n", n, tong(n));
		printf("P(%d) = %ld\n", n, tich(n));
		printf("A(%.0f,%d) = %.0lf", a, n, luythua(a,n));
	}
	return 0;
}
