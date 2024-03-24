#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int check(char c[], char sdt[]) {
	if (strlen(c) < 9) 
		return 0;
	if (c[0] != '0')
		return 0;
	int idx = 1;
	sdt[0] = '0';
	for (int i = 1; i < fmin(strlen(c), 10); i++) {
		if (!isdigit(c[i]))
			return 0;
		sdt[idx++] = c[i];
	}
	sdt[idx] = '\0';
	return 1;
}

int main() {
	FILE *f;
	f = fopen("BinhLuan.txt", "r");
	if (f == NULL) {
		printf("Cannot open file!\n");
		return 0;
	} else {
		FILE *f2;
		f2 = fopen("SDT.txt", "w");
		char c[1000];
		while (fscanf(f, "%s", c) != -1) {
			char sdt[100];
			if (check(c, sdt)) {
				fprintf(f2, "%s\n", sdt);
			}
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
