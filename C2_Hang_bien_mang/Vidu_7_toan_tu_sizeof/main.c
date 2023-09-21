/*Ví dụ về toán tử sizeof
Toán tử sizeof cho ta kích cỡ tính theo BYTE của kiểu dữ liệu cũng như đối tượng 
*/
#include "stdio.h"
main()
{
    double x[] = {23.5,78,49.3};
    int n = sizeof(x);
    int y = sizeof(double);
    printf("x = %d, double = %d, so phan tu la: %d",n,x,(n/y));
    return 0;
}