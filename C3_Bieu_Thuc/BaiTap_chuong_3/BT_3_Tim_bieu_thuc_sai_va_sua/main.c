/*Tìm biểu thức sai và sửa lại cho đúng*/
#include "stdio.h"
int main()
{
    int i=1,j=3;

    //(i=j)++; Sai
    // Vì kí tự ')' là ko thể sữa đổi
    i+j++; //đúng
    //++(i+j) ++i+++j;
    //vì ++i++ là sai
    return 0;
}