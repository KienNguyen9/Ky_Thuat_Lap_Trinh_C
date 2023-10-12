/*Xác định max của 2 số thực
làm theo cách khác 
Hàm if (ko dùng else)
có tính năng "có tiếp tục hay ko?"
*/
#include "stdio.h"
#include "conio.h"
int main(){
    float a,b, max;
    // biến thể xác định có lập lại chương trình hay ko
    char k;
    tt:
    printf("\nHay nhap 2 so thuc a,b:");
    scanf("%f%f",&a,&b);
    max = a;
    if(b>a)
    max = b;
    printf("\na = %0.2f; b = %0.2f; max = %0.2f",a,b,max);
    printf("\nBam phim c de tiep tuc, phim bat ki de thoat.");
    k = getch();
    if(k == 'c'|| k == 'C')
    goto tt;    
    return 0;
}