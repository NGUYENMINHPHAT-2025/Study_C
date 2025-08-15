#include <stdio.h>

int main() {
    int age;
    printf("Nhap tuoi: ");      // Xuất thông báo ra màn hình
    scanf("%d", &age);          // Nhập số nguyên vào biến age
    printf("Ban %d tuoi\n", age); // In ra giá trị của age
    return 0;
}


// 📌 Các ký hiệu định dạng:

// %d → số nguyên (int)

// %f → số thực (float)

// %lf → số thực (double)

// %c → ký tự (char)

// %s → chuỗi (string)