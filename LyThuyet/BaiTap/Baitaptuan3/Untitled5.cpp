#include <stdio.h>
#include <math.h>

int S(int n) {
	if (n == 1)	
		return 1;
	return  n*n + S(n-1); 
}

int main() 
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int ketqua = S(n);
	printf("%d", ketqua);
}
