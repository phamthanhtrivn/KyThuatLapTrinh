#include <stdio.h>

float lai_kep(float y, int n) {
	if (n == 0)
		return y;
	return lai_kep(y,n-1) * 1.1;
}

int main() {
	float y;
	int n;
	printf("n = ");
	scanf("%d", &n);
	printf("y = ");
	scanf("%f", &y);
	printf("%.2f", lai_kep(y,n));
	return 0;
}
