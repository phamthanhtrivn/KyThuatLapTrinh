#include <stdio.h>

void doicho(int *a,int b){
	b+=*a;
	printf("\ndong 1:a=%d b=%d",*a,b);
	*a*=b;
	printf("\ndong 2:a=%d b=%d",*a,b);
	b+=*a;
	printf("\ndong 3:a=%d b=%d",*a,b);
}


int main() {
	int a=15,b=5;
	doicho(&a,b);
	printf("\ndong 4:a=%d b=%d",a,b);
	return 0;
}
