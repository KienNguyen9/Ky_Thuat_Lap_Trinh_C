/**
 * @file main.c
 * @author Kien Nguyen  
 * @brief Nhập 1 dãy số từ bàn phím
 *          - Tính trung bình cộng  của các số dương
 *          - Tính TBC của các số âm
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
int main()
{
    // mảng chứa dãy số ,Các biến tổng
    double a[4];
    double sum_am = 0, sum_duong = 0;
    printf("Nhap day so 4 phan tu: ");
    for(int i = 0; i<4 ; i++)
    {
        scanf("%lf",&a[i]);
    }
    /*
        Giải thuật
        xét từng phần tử nếu lớn hơn 0 thì cộng sum_duong, bé hơn 0 thì cộng vào sum_am
        còn lại bằng ko thì ko cộng
    */
    for(int j = 0; j<4 ; j++)
    {  
        if(a[j] > 0)
        sum_duong += a[j];
        else if(a[j] < 0)
        sum_am += a[j]; 
    }

    printf("Tong cac so duong: %.2lf\nTong cac so am: %.2lf",sum_duong,sum_am);
    return 0;
}