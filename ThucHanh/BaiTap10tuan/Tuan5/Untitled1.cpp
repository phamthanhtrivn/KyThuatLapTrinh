#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

typedef struct SINHVIEN {
	char name[30];
	char MaSV[10];
	float TK, GK, CK, TH, DTB;
}sv;

typedef SINHVIEN A[MAX];

void input(SINHVIEN A[], int n);
float diemTB(SINHVIEN *sv);
void HocLai(SINHVIEN A[], int n);
void timkiemSV(SINHVIEN A[], int n);
void sapxep(SINHVIEN A[], int n);
void output(SINHVIEN A[], int n);

int main() {
	SINHVIEN sv;
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	SINHVIEN A[MAX];
	input(A,n);
	do {
		printf("\n-------------Menu---------------\n");
		printf("1. In ra danh sach sinh vien hoc lai.\n");
		printf("2. Tim kiem sinh vien theo ma sinh vien.\n");
		printf("3. Sap xep sinh vien theo thu tu DTB giam dan.\n");
		printf("4. In ra danh sach diem thi KTLT cua sinh vien.\n");
		printf("0. Thoat!\n");
		printf("Chon chuc nang: ");
		int a;
		scanf("%d", &a);
		switch (a) {
			case 0:
				return 0;
			case 1: 
				HocLai(A,n);
				break;
			case 2:
				timkiemSV(A,n);
				break;
			case 3:
				sapxep(A,n);
				break;
			case 4:
				output(A,n);
				break;
			default:
				printf("Chuc nang chon khong hop le!\n");
		}
	} while (n != 0);
	return 0;
}

void input(SINHVIEN A[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\n---------Thong tin cua sinh vien thu %d-----------\n", i+1);
		fflush(stdin);
		printf("Ho va ten: "); gets(A[i].name);
		printf("Ma Sinh Vien: "); gets(A[i].MaSV);
		printf("Diem thuong ki: "); scanf("%f", &A[i].TK);
		printf("Diem giua ki: "); scanf("%f", &A[i].GK);
		printf("Diem cuoi ki: "); scanf("%f", &A[i].CK);
		printf("Diem thuc hanh: "); scanf("%f", &A[i].TH);
		diemTB(&A[i]);
	}
}

float diemTB(SINHVIEN *sv) {
	sv->DTB = (((2 * sv->TK + 3 * sv->CK + 5 * sv->CK) / 10) * 2 + sv->TH) / 3;	
}

void HocLai(SINHVIEN A[], int n) {
	int stt = 0;
	printf("\n---------Danh sach sinh vien phai hoc lai-------------\n");
	printf("STT\tHO TEN\t\tMA SINH VIEN\tDIEM TB\n");
	for (int i = 0; i < n; i++) {
		if (A[i].DTB < 4.0) {
			printf("%d\t%s\t%s\t%.1f\n", i+1, A[i].name, A[i].MaSV, A[i].DTB);
			stt = 1;
		}
	}
	if (stt == 0) {
		printf("Khong co sinh vien phai hoc lai!");
	}
}

void timkiemSV(SINHVIEN A[], int n) {
	int stt = 0;
	char x[30];
	printf("\nNhap MA SINH VIEN cua sinh vien can tim kiem: ");
	fflush(stdin);
	gets(x);
	for (int i = 0; i < n; i++) {
		if (strcmp(A[i].MaSV, x) == 0) {
			printf("Ho ten: %s\n", A[i].name);
			printf("Ma sinh vien: %s\n", A[i].MaSV);
			printf("Diem thuong ki: %.1f\n", A[i].TK);
			printf("Diem giua ki: %.1f\n", A[i].GK);
			printf("Diem cuoi ki: %.1f\n", A[i].CK);
			printf("Diem thuc hanh: %.1f\n", A[i].TH);
			printf("Diem trung binh: %.1f\n", A[i].DTB);
			stt = 1;
		}
	}
	if (stt == 0) {
		printf("\nKhong tim thay!\n");
	} 
}

void sapxep(SINHVIEN A[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (A[i].DTB < A[j].DTB) {
				SINHVIEN tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
	}
	printf("\n---------Danh sach sinh vien sap xep theo thu tu DTB giam dan-------------\n");
	for (int i = 0; i < n; i++) {
		printf("Ho ten: %s\n", A[i].name);
		printf("Ma sinh vien: %s\n", A[i].MaSV);
		printf("Diem thuong ki: %.1f\n", A[i].TK);
		printf("Diem giua ki: %.1f\n", A[i].GK);
		printf("Diem cuoi ki: %.1f\n", A[i].CK);
		printf("Diem thuc hanh: %.1f\n", A[i].TH);
		printf("Diem trung binh: %.1f\n\n", A[i].DTB);
	}
}

void output(SINHVIEN A[], int n) {
	printf("\n-------------Danh sach DIEM THI KTLT----------------\n");
	printf("STT\tHO TEN\t\t\t\tMA SV\t\tTK\tGK\tCK\tTH\tDTB\tGHI CHU\n");
	for (int i = 0; i < n; i++) {
		if (A[i].DTB < 4.0) {
			printf("%d\t%s\t\t\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\tHoc Lai\n", i+1, A[i].name, A[i].MaSV, A[i].TK, A[i].GK, A[i].CK, A[i].TH, A[i].DTB);
		}
		else {
			printf("%d\t%s\t\t%s\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t       \n", i+1, A[i].name, A[i].MaSV, A[i].TK, A[i].GK, A[i].CK, A[i].TH, A[i].DTB);
		}
	}
	printf("\n");
}


