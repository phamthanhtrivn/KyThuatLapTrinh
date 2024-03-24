#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
	char c[100];
	printf("Nhap xau ki tu: ");
	scanf("%s", c);
	printf("Xuat xau ki tu vua nhap bang scanf: %s\n", c);
	fflush(stdin);
	printf("Nhap xau ki tu: ");
	gets(c);
	printf("Xuat xau ki tu vua nhap bang gets: %s\n", c);
	printf("Nhap xau ki tu: ");
	fgets(c, 100, stdin);
	printf("Xau ki tu vau nhap bang puts: ");
	puts(c);
}
