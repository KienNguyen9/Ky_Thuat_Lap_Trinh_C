/*Viết chương trình tính tích 4 số thực được nạp từ bàn phím*/
#include "stdio.h"
int main()
{
    /*Khởi tạo biến của 4 số thực và tích của chúng*/
    float a, b, c, d, t;
    /*Nhập giá trị 4 số thực từ bàn phím*/
    printf("Nhap gia tri 4 so thuc lan luoc: ");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    /*Tính tích và hiển thị*/
    t = a*b*c*d;
    printf("Tich cua 4 so thuc:\
    \n%f * %f * %f * %f = %f", a,b,c,d,t);

    return 0;
}