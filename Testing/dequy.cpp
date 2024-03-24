#include <stdio.h>

int number(int n) {
	if (n < 10) {
		if (n % 2 == 0)
			return n;
		return 0;
	} else {
		if (n % 10 % 2 == 0)
			return n % 10 + number(n/10);
		return number(n/10);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", number(n));
}
