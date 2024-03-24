#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// -1 : neu muon a dung truoc b thi return -1 (a b)
// 1 : neu muon a dung sau b thi return 1 (b a)

int cmp(const void *a, const void *b) {
	char *x = (char*)a;
	char *y = (char*)b;
	if (strcmp(x, y) < 0)
		return -1;
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
	qsort(a, n, sizeof(a[0]), cmp);
	for (int i = 0; i < n; i++) {
		printf("%s\n", a[i]);
	}
	
}
