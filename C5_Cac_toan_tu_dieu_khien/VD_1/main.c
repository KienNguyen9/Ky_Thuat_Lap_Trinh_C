/*Để tính  max của 2 biến a,b ta có thể sử dụng 2 chương trình ứng với 2 dạng khác nhau của toán tử if
*/
#include "stdio.h"
int main()
{
    float a,b,max;
    int k;
    tt:
    printf("Nhap 2 so thuc a, b: ");
    scanf("%f%f",&a,&b);
    if (a>b)
    max = a;
    else 
    max = b;
    printf("a = %f\nb = %f\nmax = %f",a,b,max);
    printf("\nCo tiep tuc hay khong (c/k)\n");
    k = getch();
    if(k=='c' || k == 'C') goto tt;
    
    return 0;
}