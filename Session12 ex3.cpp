#include <stdio.h>

long long tinhGiaiThua(int n) {
    long long ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
    } else {
        long long giaiThua = tinhGiaiThua(so);
        printf("Giai thua cua %d la: %lld\n", so, giaiThua);
    }

    return 0;
}

