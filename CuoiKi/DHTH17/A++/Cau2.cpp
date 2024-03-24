#include <stdio.h>
#include <stdlib.h>

int main() {
	int *A, n;
	printf("Nhap so luong truong tham gia tiem chung: ");
	scanf("%d", &n);
	A = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("So luong tre cua truong thu %d: ", i + 1);
		do {
			scanf("%d", A + i);
		} while (*(A + i) < 0 || *(A + i) > 5000);
	}
	double Avg = 0;
	for (int i = 0; i < n; i++) {
		Avg += *(A + i);
	}
	printf("\n%.2lf", Avg / n);
	free(A);
	return 0;
}
