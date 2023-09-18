/*Kiểu dữ liệu enum
cách dùng: 
    enum tên_kiểu_cần_tạo {phần_tử_1, pt2,...} tên_biến 
*/
#include "stdio.h"
int main()

{   
    /*Kiểu enum này không có tên kiểu, chỉ có phần tử*/
    enum {T0, T1, T2}; 
    /*Kiểu enum này là kiểu các thứ trong tuần, tên kiểu là "day", n1 là tên biến được tạo*/
    enum day {cn, t2, t3, t4, t5, t6,t7} n1;
    enum day n2; // n2 là tên biến được tạo
    int i,j =2000, k = T2;
    i = t7;
    n1 = -1000;
    n2 = j;
    printf("\n n1 = %d n2 = %d i = %d", n1, n2, i);
    printf("\n k = %d T1 = %d", k, T1);
    return 0;
}