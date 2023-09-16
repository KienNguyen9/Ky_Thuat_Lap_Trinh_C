/*Thử in ra các mã ASCII từ -127 đến 127
*/
#include"stdio.h"
#include "conio.h"
/*
int main()
{        
    for(unsigned char c = 128; c <= 255 ; ++c)
    {
        printf("The ASCII value of %c is %d\n", c, c);
    }

    return 0;
}
*/

int main()
{
    char ch = -128;

    for(;ch <= 126; ch++)
    {
        printf("Value %d - character sysbol %c\n",ch,ch);
    }

    
    return 0;
}