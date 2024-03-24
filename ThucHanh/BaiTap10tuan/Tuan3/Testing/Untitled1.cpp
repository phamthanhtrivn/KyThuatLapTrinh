#include <stdio.h>
#include <string.h>
#include <ctype.h>

void find(char s[]) {
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != ' ' || i == strlen(s)-1) {
			printf("%c", s[i]);
		}
	}
}


int main() {
	char s[100];
	printf("Nhap chuoi:");
	gets(s);
	find(s);
	return 0;
}
