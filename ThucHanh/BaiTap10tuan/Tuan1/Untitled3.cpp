#include <stdio.h>
#include <math.h>
void printArithmeticSeries(int a, int r, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a + i*r);
        if ((i+1) % 10 == 0) printf("\n");
    }
}

void printGeometricSeries(int a, int q, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a*q^i);
        if ((i+1) % 10 == 0) printf("\n");
    }
}

int main() {
    int n, a, r, q;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap r: ");
    scanf("%d", &r);

    printf("Nhap q: ");
    scanf("%d", &q);

    printf("Cac so cua cap so cong:\n");
    printArithmeticSeries(a, r, n);

    printf("\nCac so cua cap so nhan:\n");
    printGeometricSeries(a, q, n);

    return 0;
}
