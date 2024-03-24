#include <stdio.h>
#include <string.h>

int main() {
	FILE *f;
	f = fopen("Infor.txt", "r");
	if (f == NULL) {
		printf("Cannot open file!\n");
		return 0;
	} else {
		char ten[100], ngay[100], sp[100];
		FILE *f2;
		f2 = fopen("Camon.txt", "w");
		while (fgets(ten, 100, f) != NULL) {
			ten[strlen(ten) - 1] = '\0';
			fgets(ngay, 100, f);
			ngay[strlen(ngay) - 1] = '\0';
			fgets(sp, 100, f);
			sp[strlen(sp) - 1] = '\0';
			fprintf(f2, "Cam on %s da tin tuong shop, don hang %s da duoc giao thanh cong vao ngay %s.\nBest !\n", ten, sp, ngay);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
