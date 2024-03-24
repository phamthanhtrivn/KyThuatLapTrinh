#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int main() {
	int n, m, *ptr;
	printf("Nhap so luong phan tu cua mang thu nhat: ");
	scanf("%d", &n);
	ptr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", ptr + i);
	}
	printf("Nhap so luong phan tu cua mang thu hai: ");
	scanf("%d", &m);
	ptr = (int*)realloc(ptr, m * sizeof(int));
	for (int i = n; i < n + m; ++i) {
		scanf("%d", ptr + i);
	}
	qsort(ptr, m + n, sizeof(int), cmp);
	printf("Mang sau khi sap xep: ");
	for (int i = 0 ; i < m + n; i++) {
		printf("%d ", *(ptr + i));
	}
	free(ptr);
	return 0;
}
