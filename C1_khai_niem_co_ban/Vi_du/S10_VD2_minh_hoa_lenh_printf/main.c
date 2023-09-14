/*Chương trình minh họa các khả năng in ra màn hình*/
#include "stdio.h"
int main()
{
    int a, c, t;
    float b, d;
    a = 123; c = -4685; t = 12;
    b = -45.855; d = 123.425;
    //clrscr();
    printf("\n \'Chuc may man\' \n");
    printf("\n \"Chuc may man\"");
    printf("\n\n \\Chuc may man\\\n");
    printf("\n \"Tong san luong hang nam tang %2d%\"",t);
    /*Giữa các số đưa ra màn hình ko có khoảng cách*/
    printf("\n\n %d%f%d%f",a,b,c,d);
    /*Giữa các số đưa ra màn hình có khoảng cách*/
    printf("\n\n %6d%8.2f%7d%8.2f",a,b,c,d);
    /*giữa các số có đặt thêm kí tự khác*/
    printf("\n\n a =%d, b = %0.2f, c = %d, d = %0.2f",a,b,c,d);
    getch();
    return 0;
}