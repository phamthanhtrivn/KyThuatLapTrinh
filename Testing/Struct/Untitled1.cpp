#include <stdio.h>
#include <math.h>

struct HS {
	char ten[100], ns[50], dc[50];
	int t, l, h;
};

typedef struct HS HS;

HS nhap() {
	HS a;
	gets(a.ten);
	gets(a.ns);
	gets(a.dc);
	scanf("%d%d%d", &a.t, &a.l, &a.h);
}

void in(HS a) {
	printf("%s %s %s %d ", a.ten, a.ns, a.dc, a.t + a.l + a.h);
} 

void thukhoa(HS a[], int n, int max_diem) {
	for (int i = 0; i < n; i++) {
		if (a[i].t + a[i].l + a[i].h == max_diem) 
		{
			in(a[i]);
			printf("\n");
		}
	}
}

void ketqua(HS a[], int n) {
	for (int i = 0; i < n; i++) {
		in(a[i]);
		if (a[i].t + a[i].l + a[i].h >= 24) {
			printf("DO\n");
		} else {
			printf("TRUOT\n");
		}
	}
}

int main() {
	HS a[1000];
	int n;
	int max_diem = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		getchar();
		a[i] = nhap();
		max_diem = fmax(max_diem, a[i].t + a[i].l + a[i].h);
	}
	printf("DANH SACH THU KHOA:\n");
	thukhoa(a, n, max_diem);
	printf("KET QUA XET TUYEN:\n");
	ketqua(a, n);
	return 0;
}
