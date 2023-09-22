/*Chương trình ví dụ về biến mảng tĩnh trong
Được khai báo và khởi tạo bên trong hàm main

*/
#include "stdio.h"
int main()
{
    static int a = 41, t[][3]=
    {
         {25,30,40},
         {145,83,10}
    };
    static float y[8] = {-45.8,32.5};
    static float x[10][2]=
    {
        {-125.3,48.9},
        {145.6,83.5}
    };
    static char n1[] = {'T','h','u','\0'};
    static char n2[] = "Thu";
    static char n3[10] = {'T','h','u','\0'};
    static char n4[10] = "Thu";

    printf("\na = %d, t(1,2) = %d, t(1,1) = %d", a,t[1][2],t[1][1]);
    printf("\ny(0) = %0.2f, y(1) = %0.2f, y(2) = %0.2f",y[0],y[1],y[2]);
    printf("\nx(1,1) = %0.2f, x(2,0) = %0.2f", x[1][1],x[2][0]);
    printf("\n%s%8s%8s%8s",n1, n2, n3, n4);
    return 0;
}