#include <stdio.h>

long C(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	} else if (k > n) {
		return 0;
	} else {
		return (C(n-1, k) + C(n-1, k-1));
	}
}

int main() 
{
	int n, k;
	long Tohop;
	printf("Nhap n, k: ");
	scanf("%d%d", &n, &k);
	Tohop = C(n,k);
	printf("%ld", Tohop);
	return 0;
}
