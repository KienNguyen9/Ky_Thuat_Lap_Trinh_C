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
   //Tính tích vô hướng
   s = 0.0;
   i = 1;
   tvh:
   // In ra ket qua
   s += x[i]*y[i];
   if(++i <= n)
   goto tvh;
   //In ra ket qua
   i = 1;
   inkq:
   printf("\nx[%d] = %0.2f y[%d] = %0.2f",i,x[i],i,y[i]);
   if(++i <= n)
   goto inkq;
   printf("\n\n Tich vo huong = %0.2f",s);
   return 0;    
}
