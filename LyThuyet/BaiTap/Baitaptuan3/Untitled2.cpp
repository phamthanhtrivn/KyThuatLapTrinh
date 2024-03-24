#include <stdio.h>



long Fibo(int n) {
	if (n == 1 || n == 0)
		return 1;
	else 
		return Fibo(n-1) + Fibo (n-2);
}

int main() 
{
	printf("%ld", Fibo(4));
	return 0;
}
