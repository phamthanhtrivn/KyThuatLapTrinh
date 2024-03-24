#include <stdio.h>


void nhap(int a[], int n) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

int demPhanBiet_1(int a[], int n)
{
    if(n < 1)
        return 0;
    if(n == 1)
        return 1;
    
    int dem = demPhanBiet_1(a, n - 1);
    
    int flag = 1;
    for(int i = 0; i <= n - 2; i++)
    {
        if(a[i] == a[n - 1])
            flag = 0;
    }
    if(flag == 1)
        dem++;
    return dem;
}
	

int main() {
	int a[100];
	nhap(a, 5);
	printf("%d", demPhanBiet_1(a, 5));
	return 0;
}

