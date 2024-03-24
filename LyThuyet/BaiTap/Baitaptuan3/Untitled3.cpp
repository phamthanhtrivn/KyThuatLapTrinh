#include <stdio.h>

long yn(int n);
long xn(int n) {
	if (n == 0) 
		return 1;
	else 
		return xn(n-1) + yn(n-1);
}

long yn(int n) {
	if (n == 0)
		return 0;
	else 
		return 3*xn(n-1) + 2*yn(n-1);
}

int main()
{
	printf("%ld", yn(3));
	return 0;
}
