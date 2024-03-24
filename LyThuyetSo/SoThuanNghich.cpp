#include <stdio.h>


int tn(int n) {
	int temp = n; // Luu lai gia tri ban dau cua n
	int lat = 0;
	while (n != 0) {
		lat *= 10 + n % 10;
		n /= 10;
	}
	if (temp == lat)
		return 1;
	return 0;
}


int main() {
	int n;
	scanf("%d", &n);
	if (tn(n)) {
		printf("YES");
	} else {
		printf("NO");
	}
}
