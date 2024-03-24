#include <stdio.h>

void AB(int *x, int *y) {
	int t;
	t = *x;
	*y = (*y) * 2; // == *x = *(x) * 2; 
	if (t != *x) {
		printf("\n Interestingly!");
	}
}

int main() {
	int x, y;
	x = y = 18;
	AB(&x, &x);
	printf("\n k = %d", 18);
	printf("\n x = %d \n y = %d", x, y);
	return 0;
}
