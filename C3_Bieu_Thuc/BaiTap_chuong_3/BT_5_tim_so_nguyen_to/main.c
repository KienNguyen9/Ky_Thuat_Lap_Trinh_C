/*Nhập số n từ bàn phím (0<n<10)
kiểm tra n có phải là số nguyên tố ko
*/

/*
#include "stdio.h"
int main(){
    int n = 0;
    while(n<=0 || n>=10){
        printf("Nhap so nguyen n (0<n10):");
        scanf("%d",&n);
    }
    if(n!=2 && n%2==0)
    {
        printf("\nn = %d khong phai la so nguyen to",n);
    }else{
        printf("\nn = %d la so nguyen to",n);
    }    
    return 0;
}
*/
#include <stdio.h>

int main() {
  int n;
  // Nhập số nguyên n
  printf("Nhập số nguyên n: ");
  scanf("%d", &n);

  // Kiểm tra xem n có phải là số nguyên tố hay không
  int i;
  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      printf("n không phải là số nguyên tố\n");
      return 0;
    }
  }

  // Nếu n không chia hết cho bất kỳ số nguyên nào từ 2 đến n/2 thì n là số nguyên tố
  printf("n là số nguyên tố\n");
  return 0;
}
