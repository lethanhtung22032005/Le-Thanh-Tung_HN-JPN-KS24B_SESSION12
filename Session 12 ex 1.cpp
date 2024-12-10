#include <stdio.h>


int tinhTong(int a, int b) {
    return a + b;
}

int main() {
    int so1, so2, ketQua;

 
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);

    printf("Nhap so thu hai: ");
    scanf("%d", &so2);

  
    ketQua = tinhTong(so1, so2);

    
    printf("Tong cua %d va %d la: %d\n", so1, so2, ketQua);

    return 0;
}

