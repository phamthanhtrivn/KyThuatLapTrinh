#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void bai(char c[]) {
	strlwr(c);
	char a[20][50];
	int n = 0; 
	char *token = strtok(c, " ");
	while (token != NULL) {
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
}

int main() {
	char c[100];
	gets(c);
	return 0;
}
