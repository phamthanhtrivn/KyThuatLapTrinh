#include <stdio.h>
#include <math.h>

long long tohop(int n, int k) {
	k = fmin(k, n - k);
	long long res = 1;
	for (int i = 1; i <= k; i++) {
		res *= (n - i + 1);
		res /= i;
	}
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%lld ", tohop(i,j));
		}
		printf("\n");
	}
	return 0;
}
