/*Chương trình tính x lũy thừa y*/
#include "stdio.h"
#include "conio.h"
#include "math.h"
int main(){
    /*Khai báo 3 biến kiểu double*/
    double x, y, z;
    //clrscr();
    /* In dòng chữ "Nhập x, y" */
    printf("Nhap x, y: ");
    scanf("%lf%lf",&x,&y);
    /*Tính lũy thừ bằng hàm trong thư viện math.h, gán vào z*/
    z = pow(x,y);
    /*In kết quả ra màn hình*/
    printf("%0.2lf luy thua %0.2lf la : %0.2lf", x, y, z);
    getch();
    return 0;

}