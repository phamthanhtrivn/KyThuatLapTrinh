#include <stdio.h>
#include <math.h>

int main() {
    int n, a, r, q, i;
    
    do {
        printf("Nhap so nguyen a: ");
        scanf("%d", &a);
    } while (a <= 0);
    
    do {
        printf("Nhap so nguyen n: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    printf("Nhap so nguyen r: ");
    scanf("%d", &r);
    
    do {
        printf("Nhap so nguyen q: ");
        scanf("%d", &q);
    } while (q <= 0);
    
    printf("Cac so trong cap so cong co cong sai %d la:\n", r);
    for (i = 0; i < n; i++) {
        printf("%d ", a + i * r);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    printf("Cac so trong cap so nhan co cong bo %d la:\n", q);
    for (i = 0; i < n; i++) {
        printf("%d ", a * pow(q, i));
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    return 0;
}
