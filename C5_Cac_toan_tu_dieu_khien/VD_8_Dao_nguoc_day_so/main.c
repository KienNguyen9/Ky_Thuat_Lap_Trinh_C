/* Chuong trinh dao nguoc mot day so. Ban 3 (050101B3.C) */
#include "stdio.h"
#include "conio.h"

float x[] = {63.2, -45.6, 70.1, 3.6, 14.5};
int n = sizeof(x) / sizeof(float);
int main()
{
int i = -1, j= n;
float c;

for ( ; n-1 - ++i, i < --j; )  /* Vang mat bieu thuc 1 va 3 */
{
c = x[i];
x[i] = x[j];
x[j] = c;

}
printf("\n Day ket qua: \n");
for(i=0; i-n; ) /* Thay quan he i < n bang bieu thuc i - n */
printf("%8.2f", x[i++]);
return 0;
}
