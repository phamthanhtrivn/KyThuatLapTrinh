#include <stdio.h>
#include <math.h>

#define max 1000

typedef struct point {
    int x;
    int y;
} Point;

typedef Point PointArray[max];

float P1P2(Point P1, Point P2) {
    float distance = sqrt(pow((P1.x - P2.x), 2) + pow((P1.y - P2.y), 2));
    return distance;
}

float SP1P2P3(Point P1, Point P2, Point P3) {
    float a = P1P2(P1, P2);
    float b = P1P2(P2, P3);
    float c = P1P2(P3, P1);
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

float S(PointArray A, int n) {
    float totalArea = 0;
    for (int i = 2; i < n; i++) {
        Point P1 = A[0];
        Point P2 = A[i - 1];
        Point P3 = A[i];
        float area = SP1P2P3(P1, P2, P3);
        totalArea += area;
    }
    return totalArea;
}


int main() {
    int n;
    PointArray A;
    printf("Nhap so dinh cua da giac: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap toa do dinh thu %d: ", i + 1);
        scanf("%d%d", &A[i].x, &A[i].y);
    }
    float area = S(A, n);
    printf("Dien tich cua da giac loi la: %f\n", area);
    return 0;
}
