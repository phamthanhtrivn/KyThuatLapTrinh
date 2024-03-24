#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct SINHVIEN {
	char ten[100], email[100], sdt[100];
	float t, l, h;
};

typedef struct SINHVIEN SV;

int cmp(const void *a, const void *b) {
	SV *x = (SV*)a;
	SV *y = (SV*)b;
	return (x->t + x->l + x->h) - (y->t + y->l + y->h);
}

int main() {
	FILE *f;
	f = fopen("DiemThi.txt", "r");
	if (f == NULL) {
		printf("Cannot open this file!\n");
		return 0;
	} else {
		FILE *f2;
		SV a[1000];
		int n = 0;
		f2 = fopen("TrungTuyen.txt", "w");
		while (1) {
			char ten[100], email[100], sdt[100];
			float t, l, h;
			if (fgets(ten, 100, f) == NULL) {
				break;
			}
			ten[strlen(ten) - 1] = '\0';
			fscanf(f, "%s %s", email, sdt);
			fscanf(f, "%f %f %f", &t, &l, &h);
			fgetc(f);
			strcpy(a[n].ten, ten);
			strcpy(a[n].email, email);
			strcpy(a[n].sdt, sdt);
			a[n].t = t; a[n].l = l; a[n].h = h;
			++n;
		}
		qsort(a, n, sizeof(SV), cmp);
		for (int i = 0 ; i < n; i++) {
			if (a[i].t + a[i].l + a[i].h >= 27) {
				fprintf(f2, "%s\n%s\n%s\n%.1f\n", a[i].ten, a[i].email, a[i].sdt, a[i].t + a[i].l + a[i].h);
			}
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
