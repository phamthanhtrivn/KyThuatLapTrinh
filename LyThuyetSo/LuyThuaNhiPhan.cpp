#include <stdio.h>


long long lt2(int a, int b) {
	long long res = 1;
	//xet tung bit cua b
	while (b != 0) {
		if (b % 2 == 1) {
			//b la so le: bit cuoi cung hien tai cua b la 1
			res *= a;
		}
		a *= a;
		b /= 2;
	}
	return res;
}

int main() {
	int a, b;
	printf("%lld", lt2(2,10));
}
