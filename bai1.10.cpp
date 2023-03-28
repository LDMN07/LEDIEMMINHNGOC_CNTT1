#include <stdio.h>
#define PI 3.14

typedef struct {
    float x;
    float y;
} 
ToaDo;
typedef struct {
    ToaDo tam;
    float banKinh;
}
DuongTron;
void nhapDuongTron(DuongTron *dt) {
    printf("Nhap toa do tam:\n");
    printf("x = ");
    scanf("%f", &(dt->tam.x));
    printf("y = ");
    scanf("%f", &(dt->tam.y));
    printf("Nhap ban kinh: ");
    scanf("%f", &(dt->banKinh));
}
float tinhDienTich(DuongTron dt) {
    return PI * dt.banKinh * dt.banKinh;
}
float tinhChuVi(DuongTron dt) {
    return 2 * PI * dt.banKinh;
}
void xuatKetQua(DuongTron dt) {
    printf("Duong tron co tam (%.2f, %.2f) va ban kinh %.2f:\n", dt.tam.x, dt.tam.y, dt.banKinh);
    printf("- Dien tich: %.2f\n", tinhDienTich(dt));
    printf("- Chu vi: %.2f\n", tinhChuVi(dt));
}

int main() {
    DuongTron dt;
    nhapDuongTron(&dt);
    xuatKetQua(dt);
    return 0;
}
