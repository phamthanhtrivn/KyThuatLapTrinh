#include <stdio.h>

typedef struct PhanSo{
	int tuso, mauso;
}ps;


void input(PhanSo &ps) {
	printf("Nhap tu so: ");
	scanf("%d", &ps.tuso);
	printf("Nhap mau so: ");
	scanf("%d", &ps.mauso);
}

void output(PhanSo ps) {
	printf("%d/%d", ps.tuso, ps.mauso);
}

int ucln(int a, int b) {
	if (b == 0)
		return a;
	else 
		return ucln(b, a % b);
} 

void toigian(PhanSo &ps) {
	int gcd = ucln(ps.tuso, ps.mauso);
	ps.tuso /= gcd;
	ps.mauso /= gcd;
}
int main() {
	PhanSo ps;
	input(ps);
	printf("Phan so vua nhap la: ");
	output(ps);
	toigian(ps);
	printf("\nPhan so sau khi toi gian la: ");
	output(ps);
	return 0;
}
