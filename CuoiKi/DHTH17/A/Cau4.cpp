#include <stdio.h>
#include <math.h>

int dq(int a[], int n) {
	if (n - 1 == 0) {
		if (a[n - 1] % 2 == 0) 
			return a[n - 1];
		return -1;
	}
	if (a[n - 1] % 2 == 0) 
		return fmax(a[n - 1], dq(a, n - 1));
	return dq(a, n - 1);
}

int main() {
	int a[4] = {5, 8, 3, 9};
	printf("%d", dq(a, 4));
	return 0;
}
