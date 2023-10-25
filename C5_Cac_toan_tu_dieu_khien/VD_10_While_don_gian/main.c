/*
    Đoạn chương trình sau sẽ cho số nguyên dương n nhỏ nhất sao cho:
    1+2+3+...+n > 10000
*/
#include "stdio.h"
int main()
{
    int n = 1, s = 1;
    while(s<10000)
    {
        s += ++n;
    } 
    printf("\n n = %d",n);
    return 0;
}