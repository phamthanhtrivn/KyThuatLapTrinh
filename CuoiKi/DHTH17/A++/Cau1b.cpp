#include <stdio.h>

void CD(int *a, int b) {
	a + 1;
	if (*a != b) 
		b = b + 2;
	*a = b;
}

int main() {
	int x, y;
	x = y = 18;
	CD(&x, y);
	printf("1. k = 18\n");
	printf("2. x = %d, y = %d\n", x, y);
	return 0;
}
