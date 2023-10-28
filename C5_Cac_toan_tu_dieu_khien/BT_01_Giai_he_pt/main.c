/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Lập phương trình giải hệ 
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
int main()
{
    double a,b,c,d,e,f;
    double x,y;
    // Nhập các hệ số a,b,c,d,e,f
    printf("Nhap cac he so cua pt theo thu tự a,b,c,d,e và f:");
    scanf("%lf%lf%lf",&a,&b,&c); //(1)
    scanf("%lf%lf%lf",&d,&e,&f); //(2)
    /*  Giải thuật
        Tìm x bằng pt (1)
        Thay x vào pt (2)
        Tìm ra y
        Thay y vào pt 1 để tìm x
    */
   if(a/d != b/e){
    // PT có 1 nghiệm
    y = (f- d*c/a)/(b*d/a + e);
    x = (c-b*y)/a;
    printf("x = %lf\ny = %lf",x,y); 
   } else if(a/d == b/e && a/d != c/f)
   {
    printf("PT vo nghiem");
   } else
   printf("PT vo so nghiem");
    
    
    return 0;
}