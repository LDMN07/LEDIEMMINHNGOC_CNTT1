#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int n;
    float *a; 
}
DaThuc;
void nhapDaThuc(DaThuc *P) {
    printf("Nhap so bac cua da thuc : ");
    scanf("%d", &P->n);
    P->a = (float*) malloc((P->n + 1) * sizeof(float));
    for (int i = P->n; i >= 0; i--) {
        printf("Nhap he so a [%d]: ", i);
        scanf("%f", &P->a[i]);
    }
}
void xuatDaThuc(DaThuc P) {
    printf("Da thuc P(x) = ");
    for (int i = P.n; i > 0; i--) {
        printf("%.2fx^%d + ", P.a[i], i);
    }
    printf("%.2f\n", P.a[0]);
}
int main() {
    DaThuc P;
    nhapDaThuc(&P);
    xuatDaThuc(P);
    free(P.a);
    return 0;
}


