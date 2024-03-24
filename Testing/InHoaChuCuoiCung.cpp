#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuanhoa(char c[]) {
	for (int i = 0; i < strlen(c); i++) {
		c[i] = tolower(c[i]);
	}
	c[strlen(c) - 1] = toupper(c[strlen(c) - 1]);
}

int main() {
	char c[100];
	gets(c);
	char a[20][50];
	int n = 0;
	char *token = strtok(c, " ");
	while (token != NULL) {
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}	
	for (int i = 0; i < n; i++) {
		chuanhoa(a[i]);
		printf("%s ", a[i]);
	}
	return 0;
}
