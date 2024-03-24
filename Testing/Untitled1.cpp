#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_tolower(char c) { // kiem tra ki tu thuong
	if (c >= 'a' && c <= 'z') 
		return 1;
	return 0;
}

int is_toupper(char c) { // kiem tra ki tu in hoa
	if (c >= 'A' && c <= 'Z') 
		return 1;
	return 0;
}

int is_alpha(char c) { // kiem tra ki tu
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') 
		return 1;
	return 0;
}

int is_digit(char c) { // kiem tra ki tu chu so
	if (c >= '0' && c <= '9') 
		return 1;
	return 0;
}

char to_lower(char c) { // chuyen ki tu hoa thanh thuong
	if (c >= 'A' && c <= 'Z') {
		c += 32;
	}
	return c;
}

char to_upper(char c) { // chuyen ki tu thuong thanh hoa
	if (c >= 'a' && c <= 'z') {
		c -= 32;
	}
	return c;
}

int strlen(char c[]) { // tinh do dai cua xau ki tu
	int cnt = 0;
	while (c[cnt] != '\0') {
		++cnt;
	}
	return cnt;
}

char* strlwr(char c[]) { // Viet thuong tat ca cac chu cai trong xau
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] >= 'A' && c[i] <= 'Z') {
			c[i] += 32;
		}
	}
	return c;
}

char* strupr(char c[]) { // Viet hoa tat ca cac chu cai trong xau
	for (int i = 0; i < strlen(c); i++) {
		if (c[i] >= 'a' && c[i] <= 'z') {
			c[i] -= 32;
		}
	}
	return c;
}

char* strrev(char c[]) { // dao nguoc xau
	int l = 0, r = strlen(c) - 1;
	while (l < r) {
		char tmp = c[l];
		c[l] = c[r];
		c[r] = tmp;
		++l; --r;
	}
	return c;
}

long long atoll(char c[]) { // chuyen ki tu thanh chu so
	long long res = 0;
	for (int i = 0; i < strlen(c); i++) {
		res = res * 10 + c[i] - '0';
	}
	return res;
}


int main() {
	char c[100];
	gets(c);
	strrev(c);
	printf("%s", c);
	return 0;
}
