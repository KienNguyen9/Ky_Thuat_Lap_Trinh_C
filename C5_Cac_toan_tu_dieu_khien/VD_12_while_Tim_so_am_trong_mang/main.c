/**
 * @file main.c
 * @author Kien Nguyen
 * @brief Tìm số âm trong mảng gồm n các số nguyên
 * @version 0.1
 * @date 2023-10-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
int main()
{
    // n số nguyên chứa trong mảng a
    int n = 5;
    int a[5] = {1,6,-4,3,9};
    int count = 0; 
    //Xét từng phần tử trong mảng 
    while(count++ < 5)
    {
        if(a[count] < 0)
        goto so_am;
    }
    so_am:
    printf("phan tu thu %d la so am: %d",++count,a[count]);
    return 0;
}