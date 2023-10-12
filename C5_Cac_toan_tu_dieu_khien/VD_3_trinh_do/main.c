/* Chương trình tìm trình độ học vấn theo mã số
*/
#include "stdio.h"
#include "conio.h"
int main()
{
    int ma;
    printf("Nhap ma so:\n");
    scanf("%d",&ma);
    printf("Ma cua ban la: %d\n",ma);
    if(ma == 1)
    printf("So cap");
    else if(ma == 2)
    printf("trung cap");
    else if(ma==3)
    printf("Dai hoc");
    else if(ma==4)
    printf("cao hoc");
    else if(ma ==5)
    printf("Pho tien si");
    else if(ma == 6)
    printf("tien si");
    else
    {
        printf("Vui long nhap ma tu 1 -> 6!");
    }
    return 0;
}