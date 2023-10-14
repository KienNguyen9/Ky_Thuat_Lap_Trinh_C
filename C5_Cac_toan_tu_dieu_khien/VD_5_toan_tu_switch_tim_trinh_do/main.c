/*Dung toán tử switch case để tìm trình độ của nhân viên công ty
*/
#include "stdio.h"
#include "conio.h"
int main()
{
    int ma;
    printf("Nhap ma =");
    scanf("%d",&ma);
    printf("Ma = %d",ma);
    switch(ma)
    { 
        case 1:
        printf(", so cap");
        break;
        case 2:
        printf(", trung cap");
        break;
        case 3:
        printf(", dai hoc");
        break;
        case 4:
        printf(", cao hoc");
        break;
        case 5:
        printf(", pho tien si");
        break;
        case 6:
        printf(", tien si");
        break;
        default:
        printf(", nhap sai ma! nhap lai ma tu 1 - 6.");
    }
    
    return 0;
}
