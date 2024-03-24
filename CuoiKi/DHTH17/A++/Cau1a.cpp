#include <stdio.h>

int main() {
	int i = 18 % 2;
	int A[] = {2, 3, 5, 7, 11, 13}, *p;
	p = &A[3];
	printf("1. %d\n", 18);
	printf("2. %d\n", *(p++));
	printf("3. %d\n", (p - A));
	printf("4. %x, %d\n", (A + A[i]), *(A + A[i]));
	printf("5. %x, %d\n", (p + i), *(p + i));
	return 0;
}
