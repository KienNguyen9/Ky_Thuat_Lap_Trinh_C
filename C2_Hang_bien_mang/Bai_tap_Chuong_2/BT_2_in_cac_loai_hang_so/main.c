/* Chương trình in ra các hằng số sau:
Hằng dấu phẩy chấm động
Hằng int, hằng long
Hằng int hệ 8, 16
hằng kí tự, xâu kí tự
*/
#include "stdio.h"
int main()
{
    printf("\nHang dau phay cham dong: %10.2f",1234.56e2);
    printf("\nHang nguyen: %10d",12345);
    printf("\nHang nguyen dai: %10d",35L);
    printf("\nHang int he 8: %7d",0123);
    printf("\nHang int he 16: %7d",0xFF);
    printf("\nHang ki tu: %c",'a');
    printf("\nHang xau ki tu: %10c%s",' ',"KIEN NGUYEN");
    
    return 0;
}