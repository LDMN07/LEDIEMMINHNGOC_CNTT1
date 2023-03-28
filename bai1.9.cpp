#include <stdio.h>
#include <math.h>

typedef struct {
    float x; 
    float y; 
    float r; 
}
DuongTron;
void NhapDuongTron(DuongTron *dt) {
    printf("Nhap toa do tam cua duong tron:\n");
    printf("x = ");
    scanf("%f", &(dt->x));
    printf("y = ");
    scanf("%f", &(dt->y));
    printf("Nhap ban kinh cua duong tron: ");
    scanf("%f", &(dt->r));
}
void XuatDuongTron(DuongTron dt) {
    printf("Thong tin ve duong tron:\n");
    printf("Tam = (%.2f, %.2f)\n", dt.x, dt.y);
    printf("Ban kinh = %.2f\n", dt.r);
}
int main() {
    DuongTron dt;
    NhapDuongTron(&dt);
    XuatDuongTron(dt);

    return 0;
}
