#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	float *x = (float*)a;
	float *y = (float*)b;
	return *y - *x;
}

int main() {
	int n;
	printf("Nhap so luong VDV: ");
	do {
		scanf("%d", &n);
	} while (n <= 0);
	float *A;
	A = (float*)malloc(n * sizeof(float));
	for (int i = 0; i < n; i++) {
		printf("Ket qua cua VDV thu %d: ", i + 1);
		do {
			scanf("%f", &A[i]);
		} while (A[i] < 0 || A[i] > 10);
	}
	qsort(A, n, sizeof(float), cmp);
	printf("Ket qua cua cac VDV vang, bac, dong: \n");
	for (int i = 0; i <= 2; i++) {
		printf("%.1f\n", A[i]);
	}
	return 0;
}
