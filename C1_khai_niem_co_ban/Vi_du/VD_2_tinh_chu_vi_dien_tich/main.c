/*
    Tinh chu vi va dien tich hinh tron
*/

#include "stdio.h"
#include "conio.h"
#include "math.h" /*Thu vien cac ham toan hoc*/

int main()
{
    /*Khai báo 3 biến số thực*/
    float r, cv, dt;
    /*In ra màn hình thông báo nhập vào bán kính hình tròn*/
    printf("Nhap ban kinh hinh tron r = ");
    /*Lệnh nhập bán kính*/
    scanf("%f", &r);
    /*Tính chu vi, diện tích*/
    cv = 2*r*3.14; 
    dt = 3.14*r*r;
    /*In ra kết quả*/
    printf("\nChu vi cua hinh tron la: %f",cv);
    printf("\nDien tich cua hinh tron la: %f",dt);
    return 0;
}
