/*Biến mảng ngoài hay biến toàn cục
- Thời gian tồn tại (được cấp phát bộ nhớ) : trong suốt thời gian hoạt động của chương trình
- Phạm vi sử dụng: từ vị trí khai báo đến cuối chương trình 
Chú ý :
Từ khóa extern 
Nếu chương trình viết trên nhiều tệp và các tệp được dịch đọc lập thì phạm vi hoạt động của biến (mảng) ngoài 
có thể được mở rộng bằng cách thêm từ khóa extern 
*/
#include "stdio.h"
/*Các biến, mảng ngoài*/
extern char sao = '*'; // biến này có thêm keyword extern nên có thể dùng ở những tệp đã được liên kết
int a = 6*365;
long b = 34*3*2467;
float x = 32.5;
float y[6] = {3.2, 0, 5.1, 23, 0, 41};
int z[3][2] = 
{
    {25,31},
    {46, 54},
    {93,81}
};

int main()
{
    /*Các biến trên là các biến ngoài (toàn cục) có thể sử dụng trong tất cả các hàm (nếu không có biến trùng tên trong hàm đó) 
    và các khối lệnh bên dưới nó*/
    {
        printf("In ki tu sao: %c", sao);
    }
    printf("In mang 2 chieu z:");
    for(int i=0;i<=2;i++)
    {
        for(int j = 0; j<=1;j++)
        {
            printf("\nPhan tu hang %d cot %d la: %d",i,j,z[i][j]);
        }
    }

    return 0;
}