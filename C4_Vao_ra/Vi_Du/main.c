/*Ví dụ hàm printf()*/
#include "stdio.h"
#include "conio.h"
int main()
{
    //clrscr();
    printf("123456789...(dong nay danh so vi tri cot)");
    printf("%-8d \n",-2503);
    printf("%-08d \n",-2503);
    printf("%8d \n",-2503);
    printf("%08d \n",-2503);
    printf("%-08s \n","abcdef");
    printf("%08s \n","abcdef");
    printf("%8s", "abcdef");
    return 0;
}