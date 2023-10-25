/*
Tìm phần tử âm đầu tiên trong ma trận
dùng chu trình lồng chu trình 
goto và break để thoát khỏi chu trình
*/
#include "stdio.h"
#include "conio.h"

float a[3][4] = {
{15, 46, 3.5, 6.3},
{34, 0, -25, 35},
{1, -23, 46, -38}
};

// Cách 1:
/*
int main()
{
    int i,j;
    for(i = 0; i < 3; i++)
    for(j= 0; j < 4; j++)
    {
        if(a[i][j] < 0)
        {
            goto tim_thay;
        }

    }
    goto ket_thuc;
    tim_thay:
    {
        printf("a[%d][%d] = %0.2f",i,j,a[i][j]);
    }
    ket_thuc:
        printf("Ko co phan tu am");
    return 0;
}
*/
// Cách 2 : dùng break
int main()
{
    int i, j;

    for (i=0; i<3; ++i)
    {   
        for(j = 0; j<4; j++)
        {
            if (a[i][j]<0)
            break;
        }
    }

    if (i<3 && j<4)
        printf("\n Phan tu am dau tien la a(%d, %d) = %0.2f",i+1, j+1, a[i][j]);
    else
    {
        printf("\n Ma tran khong co phan tu am.");
        printf("\n Phan tu am dau tien la a(%d, %d) = %0.2f",i+1, j+1, a[i][j]);

    }
    return 0;
}