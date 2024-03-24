#include <stdio.h>
#include <string.h>
#include <ctype.h>

void InHoa(char c[]) {
	for (int i = 0; i < strlen(c); i++) {
		if (i == 0 || (i > 0 && c[i-1] == ' ')) {
			c[i] = toupper(c[i]);
		}
	}
}


int main() {
	char c[100];
	gets(c);
	InHoa(c);
	printf("%s", c);
}
