/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Chương trình hóa thực toán tính căn bậc 2, dùng toán tử do while
 * @version 0.1
 * @date 2023-10-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
    // Tạo biến số thực kiểu double để tăng độ chính xác 
    double a, cana, c;
    int ch;
    tt:
    printf("\nNhap a: ");
    scanf("%lf",&a);
    if(a < 0)
    {
        printf("a < 0 : ko the tinh căn");
        goto kt;
    }else if(a == 0)
    {
        cana = 0;
        goto kq;
    }
    // Bắt đầu chương trình hóa thuật toán để tìm căn bậc 2
    cana = a;
    do
    {
        c = cana;
        cana = (cana*cana + a)/(2*cana);
        /* code */
    } while (fabs((cana - c)/c) >= 1e-5);
    
    kq: printf("\na = %8.2f sqrt(a) = %8.2f", a, cana);
    printf("\nCo tiep tuc khong? - c/k");
    ch = getch();
    if(ch == 'c') 
    goto tt;
    kt: ;
    return 0;
}