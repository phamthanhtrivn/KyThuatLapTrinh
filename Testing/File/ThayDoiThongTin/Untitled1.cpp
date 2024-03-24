#include <stdio.h>
#include <string.h>

struct SV {
	char mssv[50], ten[50], dc[50], lop[50];
};

typedef struct SV SV;

int main() {
	SV a[1000];
	int n = 0;
	FILE *f;
	f = fopen("Student.txt", "r");
	if (f == NULL) {
		printf("Cannot open file !\n");
		return 0;
	} else {
		char mssv[50], ten[50], dc[50], lop[50];
		FILE *f2;
		f2 = fopen("student.bin", "wb");
		while (1) {
			if (fgets(mssv, 50, f) == NULL) {
				break;
			}
			mssv[strlen(mssv) - 1] = '\0';
			
			fgets(ten, 50, f);
			ten[strlen(ten) - 1] = '\0';
			
			fgets(dc, 50, f);
			dc[strlen(dc) - 1] = '\0';
			
			fgets(lop, 50, f);
			lop[strlen(lop) - 1] = '\0';
			
			
			strcpy(a[n].mssv, mssv);
			strcpy(a[n].ten, ten);
			strcpy(a[n].dc, dc);
			strcpy(a[n].lop, lop);
			++n;
			
			fwrite(&a, 1, sizeof(SV), f2);
		}
		fclose(f2);
		
		// hien thi
		f2 = fopen("student.bin", "rb");
		fread(&a, 1, sizeof(SV), f2);
		for (int i = 0; i < n; i++) {
			if (strcmp(a[i].mssv, "CNTT1") == 0) {
				strcpy(a[i].ten, "Hoang Van Loc");
				strcpy(a[i].dc, "Thai Binh");
				strcpy(a[i].lop, "IT2");
			}
		}
		for (int i = 0; i < n; i++) {
			printf("%s %s %s %s\n", a[i].mssv, a[i].ten, a[i].dc, a[i].lop);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
