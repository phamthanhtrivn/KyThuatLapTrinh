#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void chuanhoa(char c[], char res[]) {
	char *token = strtok(c, " ");
	int idx = 0;
	while (token != NULL) {
		res[idx] = toupper(token[0]);
		++idx;
		for (int i = 1; i < strlen(token); i++) {
			res[idx] = tolower(token[i]);
			++idx;
		}
		res[idx] = ' ';
		++idx;
		token = strtok(NULL, " ");
	}
	res[idx] = '\0';
}


// nguyen van nam => namnguyenvan
void convert(char c[], char res[]) {
	char a[100][100];
	int n = 0; 
	char *token = strtok(c, " ");
	while (token != NULL) {
		strcpy(a[n++], token);
		token = strtok(NULL, " ");
	}
	strcpy(res, a[n - 1]);
	for (int i = 0; i < n - 1; i++) {
		strcat(res, a[i]);
	}
	res[strlen(res)] = '\0';
}

int cmp(const void *a, const void *b) {
	char *x = (char*)a;
	char *y = (char*)b;
	char tmp1[100], tmp2[100];
	strcpy(tmp1, x); strcpy(tmp2, y);
	char res1[100], res2[100];
	convert(tmp1, res1); convert(tmp2, res2);
	return strcmp(res1, res2);
}

int main() {
	FILE *f;
	f = fopen("Name.txt", "r");
	if (f == NULL) {
		printf("Cannot open this file!\n");
		return 0;
	} else {
		char ten[100];
		char a[100][100];
		int n = 0;
		FILE *f2;
		f2 = fopen("Convert.txt", "w");
		while (fgets(ten, 100, f) != NULL) {
			ten[strlen(ten) - 1] = '\0';
			char res[100];
			chuanhoa(ten, res);
			strcpy(a[n], res);
			++n;
		} 
		qsort(a, n, sizeof(a[0]), cmp);
		for (int i = 0; i < n; i++) {
			fprintf(f2, "%s\n", a[i]);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
