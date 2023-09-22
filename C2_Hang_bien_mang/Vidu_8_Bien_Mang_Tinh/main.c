/*  Biến (mảng) tĩnh 
Ta cần viết thêm keyword static đằng trước kiểu dữ liệu
- Cấp phát bộ nhớ trong suốt thời gian hoạt động của chương trính => giá trị được lưu từ đầu đến cuối 
- Khởi đầu 1 lần khi dịch chương trình

Tóm lại: 
- Tạo biến tĩnh, giúp lưu trữ dữ liệu trong suốt vòng đời của chương trình
- giới hạn phạm vi biến hàm, tránh xung đột tên
- đặt biến cục bộ thành biến toàn cục tĩnh (ngoài tĩnh) giúp tiết kiệm bộ nhớ do ko phải cấp phát và giải phóng vùng nhớ nhiều lần (Tùy trường hợp)
*/
#include "stdio.h"
//Biến, mảng tĩnh ngoài
/*
- Được cấp phát bộ nhơ trong suốt thời gian chương trình hoạt động
- chỉ sử dụng trong file được khai báo 
*/
static int a = 41, t[][3]=
{
  {25,30,40},
  {145,83,10}
};
static float y[8] = {-45.8,32.5};
static float x[10][2]=
{
  {-125.3,48.9},
  {145.6,83.5}
};
static char n1[] = {'T','h','u','\0'};
static char n2[] = "Thu";
static char n3[10] = {'T','h','u','\0'};
static char n4[10] = "Thu";

int main()
{
  printf("\n a = %d, t(1,2) = %d, t(1,1) = %d", a,t[1][2],t[1][1]);
  printf("\n x(1,1) = %0.2f, x(2,0) = %0.2f", x[1][1],x[2][0]);
  printf("\n%s%8s%8s%8s",n1, n2, n3, n4);
  return 0;
}


