#include <stdio.h>
#include <math.h>
#define max 1000
typedef struct Point{
	int x, y;	
}p;

typedef Point PointArray[max];

void input(Point &p) {
	printf("Nhap toa do diem: ");
	scanf("%d%d", &p.x, &p.y);
}

void output(Point p) {
	printf("(%d,%d)\n", p.x, p.y);
}

float P1P2(Point p1, Point p2) {
	float dx = 1.0 * p1.x - p2.x;
	float dy = 1.0 * p1.y - p2.y;
	return sqrt(dx * dx + dy * dy);
}

float SP1P2P3(Point p1, Point p2, Point p3) {
	int dientich = 0;
	float a = P1P2(p1,p2);
	float b = P1P2(p2,p3);
	float c = P1P2(p1,p3);
	if (a + b <= c || a + c <= b || b + c <= a) {
		return 0;
	} 
	float p = (a + b + c) / 2;
	dientich = sqrt(p * (p - a) * (p -b) * (p - c));
	return dientich;
}

float S(PointArray A, int n) {
	float S = 0;
	for (int i = 1; i < n-1; i++) {
		S += SP1P2P3(A[0], A[i], A[i+1]);
	}
	return S;
}
int main() {
	int n;
	PointArray A;
	printf("Nhap so dinh cua da giac: ");
	scanf("%d" ,&n);
	for (int i = 1; i <= n; i++) {
		input(A[i]);
	}
	printf("Dien tich cua da giac la: %.2f", S(A,n));
	return 0;
}
