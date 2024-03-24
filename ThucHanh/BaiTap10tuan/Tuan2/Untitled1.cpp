#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void input(int Q[], int &n) {
	printf("Nhap so phan tu cua mang Q: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		Q[i] = rand() % 100;
	}
}

void output(int Q[], int n) {
	printf("Cac phan tu cua mang Q: \n");
	for (int i = 0; i < n; i++) {
		printf("%d\n", Q[i]);
	}
}

long sum_rec(int Q[], int n) {
	if (n == 0) 
		return 0;
	return Q[n-1] + sum_rec(Q,n-1);
}

int max_rec(int Q[], int n) {
	if (n == 1)
		return Q[0];
	return Q[n-1]>max_rec(Q,n-1)?Q[n-1]:max_rec(Q,n-1);
}

int min_rec(int Q[], int n) {
	if (n == 1)
		return Q[0];
	return Q[n-1]<min_rec(Q,n-1)?Q[n-1]:min_rec(Q,n-1);
}

long sum(int Q[], int n) {
	long s = 0;
	for (int i = 0; i < n; i++) {
		s += Q[i];
	}
	return s;
}

int main() {
	int Q[100], n;
	srand(time(0));
	input(Q,n);
	output(Q,n);
	printf("Tinh tong %d phan tu cua mang Q: %ld\n", n, sum_rec(Q,n));
	printf("Phan tu lon nhat trong mang Q: %d\n", max_rec(Q,n));
	printf("Phan tu nho nhat cua mang Q la: %d\n", min_rec(Q,n));
	printf("Tinh tong %d phan tu cua mang Q bang cau lenh for: %ld", n, sum(Q,n));
}
