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
	int n, k;
	scanf("%d%d", &n, &k);
	printf("%d", tohop(n,k));
}
