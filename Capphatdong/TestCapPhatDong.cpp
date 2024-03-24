#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, *ptr, sum = 0;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);
	ptr = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		printf("phan tu thu %d cua mang: ", i + 1);
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("\nTong = %d", sum);
	free(ptr);
	return 0;
}
