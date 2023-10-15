/*
Chương trình tính tích vô hướng của 2 vector
dùng if và goto
*/
#include "stdio.h"
#include "conio.h"
#define N 100
int main()
{
    float x[N], y[N], s;
    int n, i;
    /*
    Số chiều thực tế của các vecto x, y
    */
    printf("\nChieu cua vecto: ");
    scanf("%d",&n);
    /*
    Nhập vào số liệu cho các vector x, y
    */
   i = 1;
   vaols:
   printf("\n x[%d] = ",i);
   scanf("%f",&x[i]);
   printf("\ny[%d] = ",i);
   scanf("%f",&y[i]);
   if(++i<=n)
   goto vaols; 


    
}
