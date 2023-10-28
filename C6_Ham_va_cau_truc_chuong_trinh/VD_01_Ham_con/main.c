/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Ví dụ về cách hoạt động hàm con
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
//Nguyên mẫu hàm
float max3s(float a, float b, float c);

int main()
{
    float x,y,z;
    int ch;
    tt:
    printf("Nhap vao 3 so: ");
    scanf("%f%f%f",&x,&y,&z);
    printf("\nx = %f\ny = %f\nz = %f\nGia tri lon nhat la: %f",x,y,z,max3s(x,y,z));
    printf("\nTiep tuc hay khong ? (C - K)");
    ch = getch();
    
    if(ch == 'C' || ch =='c'){
        goto tt;
    }
    return 0;
}

/// @brief Xây dựng hàm tìm giá trị lớn nhất từ 3 số nhập được vào 
/// @param a 
/// @param b 
/// @param c 
/// @return giá trị lớn nhất 
float max3s(float a, float b, float c){
    float max;
    max = a>b?a:b;
    return (max>c?max:c);
}