/*Tìm cực trị của 4 giá trị nhập từ bàn phím*/
#include "stdio.h"
int TimCT(double a, double b, double c, double d, double *max, double *min)
{
    *max = a;
    if(b > a){
        *max = b;
    } else if(c > *max)
    {
        *max = c;
    } else if(d > *max){
        *max = d;
    }
    *min = a;
      if(b < a){
        *min = b;
    } else if(c < *min)
    {
        *min = c;
    } else if(d < *min){
        *min = d;
    }
}
int main()
{
    double a,b,c,d;
    double max,min;
    printf("Nhap 4 so thuc a, b, c, d:");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    TimCT(a,b,c,d,&max,&min); 
    printf("cuc dai la: %lf\nCuc tieu la: %lf",max,min);
    return 0;
}