#include <stdio.h>
#include <stdlib.h>


//calloc

int main() {
//	dataType *pointerName = (type_cast*)malloc(size_of_byte);
//	mot mang co 1 trieu phan tu int
	int *ptr = (int*)malloc(1000000 * sizeof(int)); //4 trieu
	int n = 5;
	for (int i = 0; i < n; i++) {
		scanf("%d", &ptr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", ptr[i]);
	}
	free(ptr); // giai phong bo nho xin cap phat
	return 0;
}
