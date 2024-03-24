#include<iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;

void input(int Q[], int &n) {
	printf("Nhap so phan tu cua mang la: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		Q[i] = rand() % 100000000;
	}
}

void output(int Q[], int n) {
	printf("Cac phan tu cua mang: ");
	for (int i = 0; i < n; i++) {
		printf("%d\n", Q[i]);
	}
}

long sum_rec(int Q[], int n) {
	if (n == 0)
		return 0;
	return Q[n-1] + sum_rec(Q,n-1);
}

long sum(int Q[], int n) {
	long s = 0;
	for (int i = 0; i < n; i++) {
		s += Q[i];
	}
	return s;
}
int main()
{	
	int Q[100];
	int n = 10000;//10^4, 10^5, 10^6, ...
	input(Q,n);
	output(Q,n);
	clock_t start= clock();	
	sum(Q,n);	
	clock_t end = clock();  //do thoi gian ko de quy
	cout<<"Time = "<<(float)(end-start)/100<<"(s)"<<endl;
	clock_t start_dq= clock();
	sum_rec(Q,n);	
	clock_t end_dq = clock(); // do thoi gian de quy
	cout<<"Time = "<<(float)(end_dq-start_dq)/100<<"(s)"<<endl;
}

