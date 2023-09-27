#include "stdio.h"
int main()
{
    printf("%f",5.6+2.7+20/6+8.0); // 20/6 = 3
    printf("\n%f",5.6+2.7+20/6.0+8.0); // 20/6.0 = 3.3333

    return 0;
}