#include <stdio.h>

struct VDV {
	int ID;
	char Ho_Ten[50], Quoc_Gia[50], Ngay_Sinh[11];
	float KQ;
	unsigned int Rank;
};

VDV nhap() {
	VDV a;
	printf("Ma VDV: ");
	scanf("%d", &a.ID);
	fflush(stdin);
	printf("Ho va ten: ");
	gets(a.Ho_Ten);
	printf("Quoc gia: ");
	gets(a.Quoc_Gia);
	printf("Ngay sinh: ");
	gets(a.Ngay_Sinh);
	printf("Thanh Tich: ");
	scanf("%f", &a.KQ);
	getchar();
	return a;
}

void sapxepgiam(VDV a[], int n) {
	VDV tmp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].KQ < a[j].KQ) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void thuhang(VDV a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i].Rank = i + 1;
	}
}

void xuat(VDV a) {
	printf("%d %s %s %s %.1f %u\n", a.ID, a.Ho_Ten, a.Quoc_Gia, a.Ngay_Sinh, a.KQ, a.Rank);
}

int main() {
	int n;
	printf("Nhap so luong VDV: ");
	scanf("%d", &n);
	VDV a[n];
	for (int i = 0; i < n; i++) {
		a[i] = nhap();
	}
	sapxepgiam(a, n);
	thuhang(a, n);
	printf("\nDanh sach: \n");
	for (int i = 0; i < n; i++) {
		xuat(a[i]);
	}
	return 0;
}
