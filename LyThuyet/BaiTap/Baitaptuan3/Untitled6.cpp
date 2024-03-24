#include <stdio.h>

float S(float n) {
	if (n == 1) 
		return 1;
	return S(n-1) + 1/(2*n+1);
}


int main()
{
	float n;
	printf("Nhap n: ");
	scanf("%f", &n);
	float ketqua = S(n);
	printf("%f", ketqua);
}
