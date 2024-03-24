#include <stdio.h>
#include <string.h>


struct SV {
	char MSSV[100], ten[100], dc[100], lop[100];
};

typedef struct SV SV;

int main() {
	SV a;
	FILE *f;
	f = fopen("2K4.txt", "r");
	if (f == NULL) {
		printf("Cannot open this file ! \n");
		return 0;
	} else {
		FILE *f2;
		f2 = fopen("student.bin", "wb");
		while (fgets(a.MSSV, 100, f) != NULL) {
			a.MSSV[strlen(a.MSSV) - 1] = '\0';
			
			fgets(a.ten, 100, f);
			a.ten[strlen(a.ten) - 1] = '\0';
			
			fgets(a.dc, 100, f);
			a.dc[strlen(a.dc) - 1] = '\0';
			
			fgets(a.lop, 100, f);
			a.lop[strlen(a.lop) - 1] = '\0';
			
			fwrite(&a, 1, sizeof(SV), f2);
		}
		fclose(f2);
		// hien thi
		f2 = fopen("student.bin", "rb");
		while (fread(&a, 1, sizeof(SV), f2) != 0) {
			printf("%s %s %s %s\n", a.MSSV, a.ten, a.dc, a.lop);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
