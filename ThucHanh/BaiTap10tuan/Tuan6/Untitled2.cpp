#include <stdio.h>
#include <string.h>

struct HOCVIEN {
	char hoLot[30], ten[30], ngaySinh[10], noiSinh[40], xep_Loai[20];
	int dWin, dWord, dExcel, tongDiem;
};

typedef struct HOCVIEN HV;


void nhapthongtin(HV a[], int n) {
	fflush(stdin);
	for (int i = 0; i < n; i++) {
		printf("------Thong tin cua hoc vien thu %d---------\n", i+1);
		printf("Ho Lot: ");
		gets(a[i].hoLot);
		printf("Ten: ");
		gets(a[i].ten);
		printf("Ngay sinh(dd/mm/yy): ");
		gets(a[i].ngaySinh);
		printf("Noi sinh: ");
		gets(a[i].noiSinh);
		a[i].dWin = 0; a[i].dWord = 0; a[i].dExcel = 0;
		a[i].tongDiem = 0;
	}
}

void nhapDiem(HV a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\n-----Diem cua hoc vien %s %s-------\n", a[i].hoLot, a[i].ten);
		printf("Diem Win: ");
		scanf("%d", &a[i].dWin);
		printf("Diem Word: ");
		scanf("%d", &a[i].dWord);
		printf("Diem Excel: ");
		scanf("%d", &a[i].dExcel);
		a[i].tongDiem = a[i].dWin + a[i].dWord + a[i].dExcel;
		if (a[i].tongDiem >= 24) {
			strcpy(a[i].xep_Loai, "Gioi");
		} else if (a[i].tongDiem >= 18 && a[i].tongDiem < 24) {
			strcpy(a[i].xep_Loai, "Kha");
		} else if (a[i].tongDiem >= 15 && a[i].tongDiem < 18) {
			strcpy(a[i].xep_Loai, "T.Binh");
		} else {
			strcpy(a[i].xep_Loai, "Kem");
		}
	}
}

void inDanhsach(HV a[], int n) {
	printf("\nSTT\t HO VA TEN \t\t NGAY SINH \t NOI SINH \t GHI CHU\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t %s %s \t %s \t %s \t _______\n", i + 1, a[i].hoLot, a[i].ten, a[i].ngaySinh, a[i].noiSinh);
	}
}


void ketqua(HV a[], int n) {
	printf("\nSTT\tHO VA TEN\tDiem TONG\tXEP LOAI\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t%s %s\t%d\t\t%s\n", i + 1, a[i].hoLot, a[i].ten, a[i].tongDiem, a[i].xep_Loai);
	}
}

int main() {
	HV a[1000];
	int n;
	printf("Nhap so luong hoc vien: ");
	scanf("%d", &n);
	while (1) {
		printf("\n-----------Menu-------------\n");
		printf("1.Nhap thong tin hoc vien.\n");
		printf("2.Nhap diem hoc vien.\n");
		printf("3.In danh sach hoc vien.\n");
		printf("4.Ket qua thi cua hoc vien.\n");
		printf("0.Thoat.\n");
		int choice;
		printf("Chon: ");
		scanf("%d", &choice);
		switch (choice) {
			case 1:
				nhapthongtin(a, n);
				break;
			case 2:
				nhapDiem(a, n);
				break;
			case 3:
				inDanhsach(a, n);
				break;
			case 4:
				ketqua(a, n);
				break;
			case 0:
				return 0;
			default:
				printf("Vui long chon lai!\n");
				break;
		}
	} 
	return 0;
}
