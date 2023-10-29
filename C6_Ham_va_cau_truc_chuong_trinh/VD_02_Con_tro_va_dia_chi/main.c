/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Ví dụ minh họa con trỏ và địa chỉ 
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
//Nguyên mẫu hàm
void hoan_vi(float *a, float *b);
void main()
{
    float x =5.5, y = 6.6;
    hoan_vi(&x,&y);
    printf("\nx = %f\ny = %f",x,y);
}
void hoan_vi(float *a, float *b){
    float z;
    z = *a;
    *a = *b;
    *b = z;
}