/*Ví dụ về hằng số*/
#include "stdio.h"
#define MAX 1000
#define PI 3.141593

int main()
{
    printf("\nHang dau phay dong: %10.2f %10.2f %10.2f %10.2f",14689.2e-4, -0.1256666e3, 23468e-2, 1e4);
    printf("\nHang nguyen: %101d %101d %61d %6d %6d", 456398461, 4563894,35L, 35, -123);
    printf("\n\nHang nguyen he 8 va he 16:\
    %7d %7d %7d %7d %7d", 0345, 0xa9, 0xa9, 0xa9, 0xa9);
    /*In hằng kí tự dùng đặt tả: %[fw]c */
    printf("%c %c %6c %6c %6c %6c %6c%", '\n', '\n', 'a', '\141', '\'', '\"','\\' ); // \141 là hệ 8 sang hệ int là 97 
    printf("\n\n %10c%s",' ',"Chuc may man!");
    return 0;
}