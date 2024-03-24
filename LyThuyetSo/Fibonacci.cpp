#include <stdio.h>


// kiem tra so n co phai la so fibo khong?
int checkFibo(int n) {
	if ( n == 0 || n == 1) 
		return 1;
	long long fn1 = 1, fn2 = 0;
	for (int i = 2; i <= 92; i++) {
		long long fn = fn1 + fn2;
		if (fn == n) 
			return 1;
		fn2 = fn1;
		fn1 = fn;
	}
	return 0;
}

//In ra n so fibo dau tien
void inFibo(int n) {
	if (n == 1) 
		printf("0");
	else if (n == 2) 
		printf("0 1");
	else {
		printf("0 1 ");
		long long fn1 = 1, fn2 = 0;
		for (int i = 2; i < n; i++) {
			long long fn = fn1 + fn2;
			printf("%lld ", fn);
			fn2 = fn1; 
			fn1 = fn;
		}
	}
}

// In ra so Fibo thu n
long long findFibo(int n ){
	if ( n == 0 || n == 1) 
		return n;
	long long fn1 = 1, fn2 = 0, fn = 0;
		for (int i = 2; i < n; i++) {
			fn = fn1 + fn2;
			fn2 = fn1; 
			fn1 = fn;
		}
	return fn;	
}

int main() {
	int n;
	scanf("%d", &n);
	if (checkFibo(n)) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	inFibo(n);
	printf("\n");
	printf("%lld", findFibo(n));
}
