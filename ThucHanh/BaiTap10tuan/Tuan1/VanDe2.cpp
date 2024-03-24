#include <stdio.h>

double capsocong(int n, int a, int r) {
	if ( n == 1) 
		return a;
	return capsocong(n-1,a,r) + r;
}

double  capsonhan(int n, int a, int q) {
	if (n == 1)
		return a;
	return capsonhan(n-1,a,q) * q;
}


int main() {
	int n, a, r, q;
	printf("n = ");
	scanf("%d", &n);
	printf("a = ");
	scanf("%d", &a);
	printf("r = ");
	scanf("%d", &r);
	printf("q = ");
	scanf("%d", &q);
	printf("\nDay so cua cap so cong voi a = %d, r = %d:\n", a, r);
    for (int i = 1; i <= n; i++)
    {
        printf("%.0f\t", capsocong(i, a, r));
        if (i % 10 == 0)
            printf("\n");
    }
    printf("\nDay so cua cap so nhan voi a = %d, q = %d:\n", a, q);
    for (int i = 1; i <= n; i++)
    {
        printf("%.0f\t", capsonhan(i, a, q));
        if (i % 10 == 0)
            printf("\n");
    }
    return 0;
}
