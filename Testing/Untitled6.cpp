#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>



int main() {
	char c[1000];
	scanf("%s", c);
	int cnt = 1, res = 1;
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] != c[i + 1]) {
			++cnt;
		} else if (c[i] == c[i + 1]){
			cnt = 1;
			res = fmax(res, cnt);
		}
	} 
	printf("%d", res);
	return 0;
}

