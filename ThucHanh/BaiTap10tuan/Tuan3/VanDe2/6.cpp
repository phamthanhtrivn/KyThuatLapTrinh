#include <stdio.h>
#include <string.h>
#include <ctype.h>

void xoaKhoangtrang(char c[]) {
	int i, j;
	for (i = j = 0 ; i < strlen(c); i++) {
		if (c[i] != ' ') {
			c[j++] = c[i];
		}
	}
	c[j] = '\0';
}

int main() {
	char c[100];
	printf("Nhap chuoi:");
	gets(c);
	printf("Chuoi truoc khi xoa khoang trang:%s\n", c);
	xoaKhoangtrang(c);
	printf("Chuoi sau khi xoa khoang trang:%s", c);
	return 0;
}
