#include <stdio.h>
#include <string.h>
#include <ctype.h>


void demSotu(char s[]) {
	int count = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] != ' ') {
			printf("%c", s[i]);
		}
		if (s[i] == ' ' || i == strlen(s) - 1) {
			printf("\n");
			count++;
		}
	}
	printf("Tong so tu trong chuoi la: %d", count);
}

int main() {
	char s[100];
	printf("Nhap chuoi: ");
	gets(s);
	demSotu(s);
	return 0;
}
