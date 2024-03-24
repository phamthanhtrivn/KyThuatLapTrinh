#include <stdio.h>


int dq(int a[], int n) {
	if (n - 1 == 0) {
		if (a[n-1] % 2 == 0)
			return a[n-1];
		return 0;
	} else {
		if (a[n-1] % 2 == 0)
			return a[n-1] + dq(a, n - 1);
		return dq(a, n - 1);
	}
}

int main() {
	int a[] = {5, 3, 7, 5, 2};
	printf("%d", dq(a, 5));
	return 0;
}
