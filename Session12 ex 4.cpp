#include <stdio.h>


int timMax(int arr[], int n) {
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int mang[] = {3, 5, 7, 2, 8, -1, 4, 10}; 
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); 

  
    int max = timMax(mang, kichThuoc);
    printf("So lon nhat trong mang la: %d\n", max);

    return 0;
}

