#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// dem cac loai ki tu khac nhau trong cau theo thu tu ma ASCII
void dem(char c[]) {
	int cnt[256] = {0};
	for (int i = 0; i < strlen(c); i++) {
		cnt[c[i]]++;
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] != 0) {
			printf("%c %d\n", i, cnt[i]);
		}
	}
}

// dem cac loai ki tu khac nhau theo thu tu xuat hien
void dem2(char c[]) {
	int cnt[256] = {0};
	for (int i = 0; i < strlen(c); i++) {
		cnt[c[i]]++;
	}
	for (int i = 0; i < strlen(c); i++) {
		if (cnt[c[i]] != 0) {
			printf("%c %d\n", c[i], cnt[c[i]]);
			cnt[c[i]] = 0;
		}
	}
}

// in ra ki tu xuat hien nhieu nhat trong xau 
// neu co lan xuat hien nhu nhau thi in ra tu co thu tu tu dien lon hon
void bai3(char c[]) {
	int cnt[256] = {0};
	for (int i = 0; i < strlen(c); i++) {
		cnt[c[i]]++;
	}
	int res = 0;
	char kt;
	for (int i = 0; i < 256; i++) {
		if (cnt[i] != 0) {
			if (cnt[i] >=	 res) {
				res = cnt[i];
				kt = (char)i;
			}
		}
	}
	printf("%c %d\n", kt, res);
}

// liet ke cac ki tu xuat hien o ca hai xau
void bai4(char c1[], char c2[]) {
	int cnt[256] = {0}; 
	for (int i = 0; i < strlen(c1); i++) {
		cnt[c1[i]] = 1;
	}
	for (int i = 0; i < strlen(c2); i++) {
		if (cnt[c2[i]] != 0) {
			cnt[c2[i]] = 2;
		}
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] == 2) {
			printf("%c", i);
		}
	}
}

// liet ke ki tu xuat hien o xau 1 ma khong xuat hien trong xau 2
void bai5(char c1[], char c2[]) {
	int cnt[256] = {0};
	for (int i = 0; i < strlen(c1); i++) {
		cnt[c1[i]] = 1;
	}
	for (int i = 0; i < strlen(c2); i++) {
		if (cnt[c2[i]] != 0) {
			cnt[c2[i]] = 0;
		}
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] == 1) {
			printf("%c", i);
		}
	}
}

// liet ke cac ki tu xuat hien o xau 1 hoac xau 2
void bai6(char c1[], char c2[]) {
	int cnt[256] = {0};
	for (int i = 0; i < strlen(c1); i++) {
		cnt[c1[i]] = 1;
	}
	for (int i = 0; i < strlen(c2); i++) {
		cnt[c2[i]] = 1;
	}
	for (int i = 0; i < 256; i++) {
		if (cnt[i] == 1) {
			printf("%c", i);
		}
	}
}

// xau pangram1
int bai7(char c1[]) {
	int cnt[26] = {0};
	strlwr(c1);
	for (int i = 0; i < strlen(c1); i++) {
		cnt[c1[i] - 'a'] = 1;
	}
	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 0) {
			return 0;
		}	
	}
	return 1;
}

// kiem tra xau doi xung
int check(char c1[]) {
	int l = 0, r = strlen(c1) - 1;
	while (l < r) {
		if (c1[l] != c1[r])
			return 0;
		++l;
		--r;
	}
	return 1;
}

// kiem tra tu in hoa neu co thi in ra
int check2(char c[]) {
	for (int i = 0; i < strlen(c); i++) {
		if (islower(c[i])) {
			return 0;
		}
	}
	return 1;
}
void bai9(char c[]) {
	char *token = strtok(c, " ");
	while (token != NULL) {
		if (check2(token)) {
			printf("%s\n", token);
		}
		token = strtok(NULL, " ");
	}
}

int main() {
	char c[1005], c2[1005];
	gets(c);
	bai9(c);
	return 0;
}
