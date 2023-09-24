/* giống với ví dụ 1 nhưng ở đây dùng phép tăng giảm thận trọng
*/
#include "stdio.h"
#include "conio.h"
int main()
{
    int x = 10, y = 11;
    //clrscr();
    printf("\nKhi x = 10 va y = 11 thi gia tri cua:");
    printf("\n x-- * ++y \n x-- - --y \n x ++ + ++y");
    printf("\n se la:");
    printf("\n %d", x-- * ++y);
    printf("\n %d", x-- - --y);
    printf("\n %d", x++ + ++y);
    getch();
    return 0;
}