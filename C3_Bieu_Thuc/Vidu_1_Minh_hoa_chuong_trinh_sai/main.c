/*Chương trình sau là sai vì không tuân thủ đúng các nguyên tắc sử dụng
    Chương trình minh họa
    - việc chuyển kiểu trong biểu thức
    - sự thực hiện của các phép toàn logic
    - cách sử dụng các phép toán tăng giảm
*/
#include "stdio.h"
#include "conio.h" //
int main()
{
    int clrscr();
    printf("\n 1.5 * (11/3) = %0.2f\n 1.5*11/3 = %0.2f", 1.5*(11/3),1.5*11/3);
    printf("\n (11/3) * 1.5 = %0.2f\n 11/3*1.5 = %0.2f", (11/3)*1.5,11/3*1.5);
    printf("\n 11 / 3 + 1.5 = %0.2f", 11/3 + 1.5);
    printf("\n Gia tri cua quan he 3 > 7 la: %d",3>7);
    printf("\n Gia tri cua quan he 7 > 3 la: %d",7>3);
    printf("\n Gia tri cua phep toan 3 && 7 la: %d", 3&&7);
    {
        int x = 10;
        int y = 11;
        /* Không thận trọng khi dùng phép tăng giảm 
        -> KẾT QUẢ SAI*/
        printf("\n Khi x = 10 va y = 11 thi cau lenh: ");
        // 3 dòng dưới đây Không in gì cả
        printf("\n printf(\"\\n\%6)");
        printf("d\\n\%6");
        printf("d\\n\%6");
        //-----------------------??
        printf("d\", se in ra (gia tri sai):");
        printf("\n %6d\n%6d\n%6d", x-- * ++y, x-- - --y,x++ + ++y);
    }
    getch();
    return 0;
}