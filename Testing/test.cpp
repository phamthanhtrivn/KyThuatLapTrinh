#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuyen(char A[]){
	for(int i=0; i<strlen(A); i++){
		if(A[i]!=' ' && A[i+1]!=' '){
			if(A[i]>=65 && A[i]<=90){
				A[i]+=32;
			}
		}
		if((A[i]!=' '&&A[i+1]==' ')|| (A[i]!=' '&&A[i+1]==NULL)){
			if(A[i]>=97&&A[i]<=122){
				A[i]-=32;
			}
		}
	}
}
int main(){
	char A[20];
	gets(A);
	chuyen(A);
	printf("%s", A);
}
