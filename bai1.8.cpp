#include<stdio.h>
#include<conio.h>
#include<math.h>
struct duongThang {
    float a;
    float b;
    float c;
}
void nhapDuongThang(struct duongThang *dt) {
    printf("Nhap he so a: ");
    scanf("%f",(dt->a));
    printf("Nhap he so b: ");
    scanf("%f",(dt->b));
    printf("Nhap he so c: ");
    scanf("%f",(dt->c));
}
void xuatDuongThang(struct duongThang dt) {
    printf("%.2f*x + %.2f*y + %.2f = 0", dt.a, dt.b, dt.c);
}
 int main()
 {
        duongthang(dt);
 	nhapduongthang(dt);
 	xuatduongthang(dt);
 	return 0;
 }
