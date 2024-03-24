#include <stdio.h>

float luythua(float x, int n) {
	if (n == 0)
		return 1;
	return luythua(x,n-1)*x;
}

float Tong(float x, int n) {
	if (n == 1) 
		return x;
	return Tong(x,n-1) + luythua(x,n-1)*x;
}
int main() 
{
	printf("%f", Tong(3,3));
	
}
