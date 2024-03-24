#include <stdio.h>
#include <math.h>
//O(logN)
	//ucln bang code de quy
//int ucln(int a, int b) {
//	if (a % b == 0)
//		return b;
//	return ucln(b, a % b);
//}
int ucln(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r; 
	}
	return a;
}

int bncc(int a, int b) {
	return a * b / ucln(a,b);
}


int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d %d", ucln(a,b), bncc(a,b));
}
