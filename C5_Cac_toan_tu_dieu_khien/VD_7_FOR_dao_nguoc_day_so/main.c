#include "stdio.h"
#include "conio.h"
//Cho dãy số và tìm số phần tử
float x[] = {1.2,3.4,5.6,7.8,9};
int n =  sizeof(x)/sizeof(float);
/*
int main()
{
    int i,j;
    float c;
    for(i=0,j=n-1; i<j; ++i,--j)
    {
        c = x[i];
        x[i] = x[j];
        x[j] = c;
    }
    
    for(int z = 0; z<n; z++)
    {
        printf("%.2f - ",x[z]);
    }
   
    return 0;
}
*/

// CÁCH 2
int main()
{
    int i,j;
    float c;
    for(i = 0, j = n-1; i<j; c = x[i], x[i] = x[j], x[j] = c, i++, j--)
    {}
    for(int z = 0; z<n ; z++){
        printf("  %0.2f   ",x[z]);
    }
    return 0;
}