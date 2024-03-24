#include <stdio.h>
#include <math.h>

int main() {
	float a[100];
	FILE *f;
	// nhap 10 so thuc vao file INPUT
	f = fopen("INPUT.txt", "w");
	for (int i = 0; i < 10; i++) {
		scanf("%f", &a[i]);
		fprintf(f, "%.1f ", a[i]);
	}
	fclose(f);
	
	// Doc noi dung tu file INPUT
	f = fopen("INPUT.txt", "r");
	float n;
	printf("\nNoi dung tu file INPUT!\n");
	while (fscanf(f, "%f", &n) != -1) {
		printf("%.1f ", n);
	}
	fclose(f);	
	
	// Tinh tong binh phuong cac so trong file INPUT
	f = fopen("INPUT.txt", "r");
	float x;
	double tong = 0;
	for (int i = 0 ; i < 10; i++ ) {
		fscanf(f, "%f", &x);
		tong += pow(x, 2);
	}
	printf("\nTong binh phuong cac so trong file: %.2lf\n", tong);
	fclose(f);
	return 0;
}
