#include <stdio.h>
#include <string.h>
#define Max 100

struct HocVien{
	char hoLot[30], ten[30], ngaySinh[11], noiSinh[40], x_Loai[20];
	int dWin, dWord, dExcel, tongDiem;	
};

typedef struct HocVien HV;

HV a[Max];

void nhapthongtin(HV hv) {
	printf("Ho lot: "); fflush(stdin); gets(hv.hoLot);
	printf("Ten: "); fflush(stdin); gets(hv.ten);
	printf("Ngay sinh: "); fflush(stdin); gets(hv.ngaySinh);
	printf("Noi sinh: "); fflush(stdin); gets(hv.noiSinh);
}

void nhapDiem(HV a[], int n) {
	char hoten[100];
	getchar();
	printf("\nNhap ho ten hoc vien can nhap diem:\n");
	gets(hoten);
	for (int i = 0; i < n; i++) {
		if (strcmp(hoten, a[i].hoLot) == 0 || strcmp(hoten, a[i].ten) == 0) {
			printf("Nhap diem cho hoc vien %s %s:\n", a[i].hoLot, a[i].ten);
			printf("Diem Win: "); scanf("%d", &a[i].dWin);
			printf("Diem Word: "); scanf("%d", &a[i].dWord);
			printf("Diem Excel: "); scanf("%d", &a[i].dExcel);
			a[i].tongDiem = a[i].dWin + a[i].dWord + a[i].dExcel;
		} else {
			printf("Khong tim thay ten hoc vien de nhap diem!\n");
		}
	}
}

void Xeploai(HV a[], int n) {
	for (int i = 0; i < n; i++) {
		if (a[i].tongDiem >= 24 && a[i].tongDiem <= 30) {
			strcpy(a[i].x_Loai, "Gioi");
		} else if (a[i].tongDiem >= 18 && a[i].tongDiem < 24) {
			strcpy(a[i].x_Loai, "Kha");
		} else if (a[i].tongDiem >= 15 && a[i].tongDiem < 18) {
			strcpy(a[i].x_Loai, "T.Binh");
		} else {
			strcpy(a[i].x_Loai, "Kem");
		}
	}
}

void danhsachHV(HV a[], int n) {
	printf("\nSTT\tHO VA TEN\tNGAY SINH\tNOI SINH\tGHI CHU\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t%s %s\t%s\t%s\t_______\n", i + 1, a[i].hoLot, a[i].ten, a[i].ngaySinh, a[i].noiSinh);
	}
}

void danhsachketquathi(HV a[], int n) {
	printf("\nSTT\tHO VA TEN\tDIEM TONG\tXEP LOAI\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t%s %s\t%d\t%s\n", i + 1, a[i].hoLot, a[i].ten, a[i].tongDiem, a[i].x_Loai);
	}
}

int main() {
	HV hv;
	int n;
	printf("Nhap so luong hoc vien den ghi danh: ");
	scanf("%d", &n);
	HV a[n];
	while (n) {
		printf("-------------Menu-------------\n");
		printf("1.Nhap thong tin hoc vien\n");
		printf("2.Nhap diem cua hoc vien theo ten sau khi thi xong\n");
		printf("3.Xem danh sach hoc vien\n");
		printf("4.Ket qua thi cua hoc vien\n");
		printf("0.Thoat\n");
		int chon;
		scanf("%d", &chon);
		switch (chon) {
			case 1:
				getchar();
				for (int i = 0; i < n; i++) {
					printf("---Thong tin hoc vien thu %d-----\n", i + 1);
					nhapthongtin(a[i]);	
				}
				printf("Da nhap xong thong tin hoc vien den ghi danh!\n");
				break;
			case 2:
				nhapDiem(a, n);
				break;
			case 3:
				danhsachHV(a, n);
				break;
			case 4:
				danhsachketquathi(a, n);
				break;
			case 0:
				return 0;
			default:
				printf("Lua chon khong hop le!\n");
		}
	} 
	return 0;
}
