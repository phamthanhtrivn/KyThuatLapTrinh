#include <stdio.h>


long S(int n) {
	if (n==0)
		return 0;
	else 
		return n + S (n - 1); 
}

int main() 
{
	printf("%ld", S(10));
	return 0;
}
