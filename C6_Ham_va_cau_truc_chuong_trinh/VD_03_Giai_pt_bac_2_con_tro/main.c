/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Giai PT bậc 2, dùng con trỏ
 * @version 0.1
 * @date 2023-10-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include"stdio.h"
#include"math.h"
//Nguyễn mẫu hàm
int gpt2(float a, float b, float c, float *x1, float *x2);
void main()
{
    //Tham số đầu vào 
    float a,b,c,e,f;
    int s,ch;
    printf("Nhap tham so a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);
    s = gpt2(a,b,c,&e,&f);

    if(s == -1){
         printf("\nPT vo nghiem");   
    } else if(s == 0){
        printf("\nx1 = x2 = %f",e);
    } else{
        printf("\n2nghiem x1 = %f  x2 = %f",e,f);
    }    
}
//Xây dựng hàm
int gpt2(float a, float b, float c, float *x1, float *x2){
    float delta = b*b - 4*a*c;
    printf("%f",delta);

    if(delta < 0)
        return -1;
    else if(delta == 0){
        *x1 = -b/(2*a);   
        return 0;
    }
        
    
    *x1 = (-b + sqrt(delta))/(2*a);
    *x2 = (-b - sqrt(delta))/(2*a);
    return 1;
    
}