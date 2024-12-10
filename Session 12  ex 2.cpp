#include <stdio.h>


void inMang(int arr[], int n) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 

    
    inMang(mang, kichThuoc);

    return 0;
}
