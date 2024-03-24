#include <stdio.h>

int main() {
	FILE *f;
	f = fopen("ThongTinNhanVien.txt", "a");
	while (1) {
		char ten[100], tuoi[100], luong[100];
		printf("\nHo Ten: ");
		gets(ten);
		if (ten[0] == NULL) {
			break;
		}
		printf("Tuoi: ");
		gets(tuoi);
		printf("Luong: ");
		gets(luong);
		fprintf(f, "Ten: %s -- Tuoi: %s -- Luong: %s\n", ten, tuoi, luong);
	}
	fclose(f);	
	
	// hien thi
	f = fopen("ThongTinNhanVien.txt", "r");
	char c[100];
	while (fgets(c, 100, f) != NULL) {
		printf("%s", c);
	}
	fclose(f);
	return 0;
}
