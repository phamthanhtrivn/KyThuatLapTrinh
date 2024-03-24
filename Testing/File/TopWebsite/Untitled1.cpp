#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct word {
	char data[100];
	int ts;
};

typedef struct word word;

word a[1000];
int n = 0;

int cmp(const void *a, const void *b) {
	word *x = (word*)a;
	word *y = (word*)b;
	if (x->ts != y->ts)
		return y->ts -x->ts;
	return x->data - y->data;
}

int find(char c[]) {
	for (int i = 0; i < n; i++) {
		if (strcmp(a[i].data, c) == 0)
			return i;
	}
	return -1;
}

int main() {
	FILE *f;
	f = fopen("Log.txt", "r");
	if (f == NULL) {
		printf("Cannot open this file!\n");
		return 0;
	} else {
		FILE *f2;
		f2 = fopen("Topweb.txt", "w");
		while (1) {
			char c[1000];
			if (fgets(c, 1000, f) == NULL) {
				break;
			}
			c[strlen(c) - 1] = '\0';
			char *token = strtok(c, " ");
			token = strtok(NULL, " ");
			token = strtok(NULL, " ");
			int pos = find(token);
			if (pos == -1) {
				strcpy(a[n].data, token);
				a[n].ts = 1;
				++n;
			} else {
				a[pos].ts += 1;
			}	
		}
		qsort(a, n, sizeof(word), cmp);
		for (int i = 0; i < n; i++) {
			fprintf(f2, "%s %d\n", a[i].data, a[i].ts);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
