/*Chương trình tính tiền lương theo các tham số
    n: số ngày công
    bl: bậc lương
    lk1: lương kì 1
Tính lương kì 2 theo công thức: lk2 = (bl*n)/26 - lk1
*/
#include <stdio.h>
int main()
{
    /*Khởi tạo các biến*/
    int n;
    float bl;
    float lk1,lk2;
    printf("Nhap bac luonng: "); scanf("%f",&bl);
    printf("Nhap so ngay cong: "); scanf("%d",&n);
    printf("Nhap tien luong da lanh o ki 1: "); scanf("%f",&lk1);
    /*Tính lương kì 2 và in ra màn hình*/
    lk2 = (bl*n)/26 - lk1;
    printf("Tien luong kì 2 là: (%0.2f*%d)/26 - %0.2f = %0.2f",bl,n,lk1,lk2);
    return 0;
}