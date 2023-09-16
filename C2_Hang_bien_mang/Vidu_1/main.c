/*Chương trình minh họa phạm vi hoạt động của các biến trong và ngoài khối lệnh*/
#include "stdio.h"
main()
{
    int a, b = 20;
    int c, d = 40;
    float e = -35.11;
    float x = 23, y, z, t = 36.10;
    a = c = 10;
    y = z = a + b + c + d;
    {
        float y, z;
        y = z = e + x + t;
        printf("\ny trong = %0.1f\nz trong = %0.1f", y, z);
    }
    printf("\ny ngoai = %0.2f\nz ngoai = %0.2f", y, z);
    return 0;
}