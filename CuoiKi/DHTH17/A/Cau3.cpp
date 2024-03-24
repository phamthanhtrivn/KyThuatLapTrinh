#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef struct NHANVIEN {
	char ma_nv[8], ten_nv[50], gioi_tinh[4], ngay_sinh[11];
	double he_so_luong; 
}NV;

NV nhap(){
	NV a;
	fflush(stdin);
	printf("Ma NV: ");
	gets(a.ma_nv);
	printf("Ten NV: ");
	gets(a.ten_nv);
	printf("Gioi tinh: ");
	gets(a.gioi_tinh);
	printf("Ngay sinh: ");
	gets(a.ngay_sinh);
	printf("He so luong: ");
	scanf("%lf", &a.he_so_luong);
	return a;
}

void xuat(NV a) {
	printf("Ma NV: %s\n", a.ma_nv);
	printf("Ten NV: %s\n", a.ten_nv);
	printf("Gioi tinh: %s\n", a.gioi_tinh);
	printf("Ngay sinh: %s\n", a.ngay_sinh);
	printf("He so luong: %.1lf\n", a.he_so_luong);
	printf("Luong: %.2lf\n", a.he_so_luong * 1100000);
}

int namsinh(char c[]) {
	char res[100];
	strcpy(res, c);
	char *token = strtok(res, "/");
	token = strtok(NULL, "/");
	token = strtok(NULL, "/");
	int x = atoi(token);
	return x;
}

void nghihuu(NV a[], int n) {
	int oke = 0;
	for (int i = 0 ; i < n; i++) {
		int tuoi = 2023 - namsinh(a[i].ngay_sinh);
		if (strcmp(a[i].gioi_tinh, "nam") == 0 && tuoi >= 65) {
			oke = 1;
			xuat(a[i]);
		} else if (strcmp(a[i].gioi_tinh, "nu") == 0 && tuoi >= 55) {
			oke = 1;
			xuat(a[i]);
		}
	}
	if (oke == 0) {
		printf("Khong co nhan vien nghi huu!\n");
	}
}

int main() {
	NV a[1000];
	int n;
	printf("Nhap so luong Nhan vien: ");
	scanf("%d", &n);
	for (int i = 0 ; i < n; i++) {
		getchar();
		a[i] = nhap();
	}
	printf("\n");
	for (int i = 0 ; i < n; i++) {
		xuat(a[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("Nam sinh: %d\n", namsinh(a[i].ngay_sinh));
	}
	printf("\n");
	printf("\nNhan Vien Nghi Huu\n");
	nghihuu(a, n);
	return 0;
}
