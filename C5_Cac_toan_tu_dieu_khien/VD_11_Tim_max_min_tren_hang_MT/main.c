/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief Chương trình tìm max min trong mỗi hàng của ma trận
 * @version 0.1
 * @date 2023-10-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "stdio.h"
float a[3][4] = {
    {15, 46, 3.5, 6.3},
    {341, 0, -25, 35},
    {1, 13, 46, 31}
};
int main()
{
    // biến số nguyên
    int i, j, cotmax[3], cotmin[3];
    // biến số thực 
    float max[3], min[3];
    // Chu trình 
    for(i =0; i < 3; i++)
    {
        //
        max[i] = min[i] = a[i][0];
        cotmax[i] = cotmin[i] = 0;
        // Chu trình con
        for(j = 0; j < 4; j++)
        {
            if(max[i] < a[i][j])
            {
                max[i] = a[i][j];
                cotmax[i] = j;
            }
            if(min[i] > a[i][j])
            {
                min[i] = a[i][j];
                cotmin[i] = j;
            }
        }
    }

    for(i = 0; i < 3; i++)
    {
        printf("\n Hang: %d max = a(%d, %d) = %5.2f\
        min = a(%d, %d) = %5.2f", i+1, i+1, cotmax[i] +1, max[i], i+1, cotmin[i] + 1, min[i]);
    }
    return 0;
}

    
