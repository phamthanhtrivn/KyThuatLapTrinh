#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void chuanhoa(char c[]) {
	c[0] = toupper(c[0]);
	for (int i = 1; i < strlen(c); i++) {
		c[i] = tolower(c[i]);
	}
}

void bai(char c[]) {
	char a[20][50];
	int n = 0;
	char *token = strtok(c, " ");
	while (token != NULL) {
		chuanhoa(token);
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	printf("%s, ", a[n-1]);
	for (int i = 0; i < n - 1; i++) {
		printf("%s ", a[i]);
	}
}

int main() {
	char c[100];
	gets(c);
	char a[20][50];
	int n = 0;
	bai(c);
	return 0;
}
