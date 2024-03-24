#include <stdio.h>

int main() {
	int a[]={30,3,5,7,1,90};
	int *p;
	p=&a[4];
	printf("1. *p= %d\n",*p);
	printf("2. (p-a)=%d\n",(p-a));
	printf("3. a[*p-12]=%d\n",a[*p-12]);
	printf("4. *(a+a[1])=%d\n",*(a+a[1]));
	return 0;
}


