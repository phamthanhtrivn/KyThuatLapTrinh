#include <stdio.h>


int main() {
	int i = 18 % 2; // i = 0
	int A[] = {2, 3, 5, 7, 11, 13}, *p;
	p = &A[3]; // p = dia chi cua phan tu thu 3 cua mang
	printf("\n1. k = %d", 18);
	printf("\n2. %d", *(p + 1)); // 11
	printf("\n3. %d", (p - A)); // A = dia chi cua dau tien cua mang
	printf("\n4. %x, value = %d", (A + A[i]), *(A + A[i])); // A[0] = 2 => A + 2 = dia chi (&)A[2] (gia tri = 5)
	printf("\n5. %x, value = %d", (p + i), *(p + i)); // i = 0 => p + 0 = p = &A[3] (gia tri = 7);
	return 0;
}
