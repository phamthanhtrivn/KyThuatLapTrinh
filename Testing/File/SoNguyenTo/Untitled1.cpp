#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nt(int n) {
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return n > 1;
}

int cmp(const void *a, const void *b) {
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int main() {
	FILE *f;
	f = fopen("number.txt", "r"); // cho file co <= 1000 so ngau nhien 
	if (f == NULL) {
		printf("Cannot open file!\n");
		return 0;
	} else {
		FILE *f2;
		f2 = fopen("prime.txt", "w"); //in ra cac so nguyen to vao file prime
		int n;
		int a[1000], idx = 0;
		while (fscanf(f, "%d", &n) != -1) {
			if (nt(n)) {
				a[idx] = n;
				++idx;
			}
		}
		qsort(a, idx, sizeof(int), cmp);
		for (int i = 0; i < idx; i++) {
			fprintf(f2, "%d ", a[i]);
		}
		fclose(f2);
	}
	fclose(f);
	return 0;
}
