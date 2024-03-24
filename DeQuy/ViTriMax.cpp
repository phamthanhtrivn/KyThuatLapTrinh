#include <stdio.h>

void nhap(float a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%f", &a[i]);
	}
}

int viTriLonNhat(float a[], int n)
{
    if(n == 1)
        return 0;
    int vtln = viTriLonNhat(a, n - 1);
    if(a[n - 1] > a[vtln])
        vtln = n - 1;
    return vtln;
}
int main() {
	float a[100];
	nhap(a, 5);
	printf("%d", viTriLonNhat(a, 5));
	return 0;
}
