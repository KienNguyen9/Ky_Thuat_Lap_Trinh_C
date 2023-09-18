/* Biến (mảng) tự động hay còn gọi là biến cục bộ
Là các biến được khai báo bên trong hàm (kể cả hàm main)

- Khi máy tính đến câu lệnh đâu tiên của hàm tới khi ra khỏi hàm là thời gian hoạt động của biến trong hàm 
- Biến chỉ có tác dụng trong hàm mà nó được khai báo
*/

/*Chỉ có thể khởi đầu (gán giá trị lúc khai báo) cho biến tự động
Không làm vậy với mảng tự động
*/

#include "stdio.h"
int main()
{
    int a = 100;// đúng 
    int arr[4] = {1, 3, 5,6};//không nên làm thế này

    int array1[7]; 
    printf("%d",array1[6]); // cho ra giá trị ngẫu nhiên
    return 0;
}