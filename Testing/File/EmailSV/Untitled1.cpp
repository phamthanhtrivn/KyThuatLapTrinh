#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void email(char c[], char res[]) {
	strlwr(c);
	int n = 0;
	char a[100][100];
	char *token = strtok(c, " ");
	while (token != NULL) {
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	strcpy(res, a[n - 1]);
	int idx = strlen(res);
	for (int i = 0; i < n - 1; i++) {
		res[idx] = a[i][0];
		++idx;
	}
	res[idx] = '\0';
}


int main() {
	FILE *f;
	f = fopen("Sinhvien.txt", "r");
	if (f == NULL) {
		printf("Cannot open file!\n");
		return 0;
	} else {
		FILE *f2;
		f2 = fopen("Email.txt", "w");
		while (1) {
			char name[100];
			if (fgets(name, 100, f) == NULL) {
				fclose(f2);
				break;
			}
			name[strlen(name) - 1] = '\0';
			char ns[100];
			fscanf(f, "%s", ns);
			fgetc(f);
			char res[100];
			email(name, res);
			fprintf(f2, "%s@28land.edu.vn\n", res);
			char *token = strtok(ns, "/");
			while (token != NULL) {
				int a = atoi(token);
				fprintf(f2, "%d", a);
				token = strtok(NULL, "/");
			}
			fprintf(f2, "%c", '\n');	
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
