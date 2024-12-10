#include <stdio.h>

// Ham kiem tra so nguyen to
int is_prime(int number) {
    if (number <= 1) {
        return 0; // Khong phai so nguyen to
    }
    if (number == 2 || number == 3) {
        return 1; // 2 va 3 la so nguyen to
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return 0; // Chia het cho 2 hoac 3 thi khong phai so nguyen to
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return 0; // Chia het cho i hoac i + 2 thi khong phai so nguyen to
        }
    }
    return 1; // La so nguyen to
}

int main() {
    int num1, num2;

   
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    
    if (is_prime(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num1);
    }

    
    if (is_prime(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}

