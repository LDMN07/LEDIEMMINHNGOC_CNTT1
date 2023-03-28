#include <stdio.h>
#include <time.h>

void nhap SOTIETKIEM(SOTIETKIEM *stk) {
    printf("Nhap ma so: ");
    scanf("%5s", stk->maSo);
    
    printf("Nhap loai tiet kiem: ");
    scanf("%10s", stk->loaiTietKiem);
    
    printf("Nhap ho ten khach hang: ");
    scanf("%30s", stk->hoTenKH);
    
    printf("Nhap so chung minh nhan dan: ");
    scanf("%d", &stk->cmnd);
    
    printf("Nhap ngay mo so (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &stk->ngayMoSo.tm_mday, &stk->ngayMoSo.tm_mon, &stk->ngayMoSo.tm_year);
    stk->ngayMoSo.tm_year -= 2023;
    
    printf("Nhap so tien gui: ");
    scanf("%f", &stk->soTienGui);
}

void xuat SOTIETKIEM(SOTIETKIEM stk) {
    printf("Ma so: %s\n", stk.maSo);
    printf("Loai tiet kiem: %s\n", stk.loaiTietKiem);
    printf("Ho ten khach hang: %s\n", stk.hoTenKH);
    printf("So chung minh nhan dan: %d\n", stk.cmnd);
    printf("Ngay mo so: %02d/%02d/%d\n", stk.ngayMoSo.tm_mday, stk.ngayMoSo.tm_mon, stk.ngayMoSo.tm_year + 1900);
    printf("So tien gui: %.2f\n", stk.soTienGui);
}

int main() {
    SOTIETKIEM stk;
    
    nhap SOTIETKIEM(&stk);
    printf("\n");
    xuat SOTIETKIEM(stk);
    
    return 0;
}
