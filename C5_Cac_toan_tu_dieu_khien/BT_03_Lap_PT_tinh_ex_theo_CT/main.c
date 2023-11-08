/**
 * @file main.c
 * @author Kien Nguyen  
 * @brief Lap PT tính e^x theo công thức đã cho sẵn 
 * Giai bài toán này ta cần viết 2 hàm con là:
 * Hàm tính lũy thừa và hàm tính giai thừa
 *    
 * @version 0.1
 * @date 2023-10-28
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include"stdio.h"

float luyThua(int n, int k) {
	int pow = 1;
	for (int i = 1; i <= k; i++)
		pow *= n;
	return (float)pow;
}

float giaiThua(int n) {
	int giaithua = 1;
	for (int i = 1; i <= n; i++)
		giaithua *= i;
	return (float)giaithua;
}
// Chương trình tính e^x
float fun(int x)
{
    // biến nhận giá trị trả về
    float sum = 0;
    //biến đếm i
    int i = 0;
    //Vòng lặp để tính e^x
    while(luyThua(x, i) / giaiThua(i) > 1e-10)
    {
        sum += luyThua(x,i)/giaiThua(i);
        i++; 
    }
    return sum;
}


int main()
{
    int x;
    // tính e^x
    //Nhập số mũ x
    printf("Nhap so mu x: ");
    scanf("%d",&x);
    printf("e^x = %6f",fun(x));
    return 0;
}




