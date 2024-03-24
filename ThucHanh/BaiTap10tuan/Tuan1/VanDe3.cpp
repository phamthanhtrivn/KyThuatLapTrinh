#include <stdio.h>

void xuatnhiphan(int n) {
	if (n < 2) {
		printf("%d", n % 2);
	} else {
		xuatnhiphan(n/2);
		printf("%d", n % 2);
	}
}


int main() {
	int n;
	scanf("%d", &n);
	xuatnhiphan(n);
}
