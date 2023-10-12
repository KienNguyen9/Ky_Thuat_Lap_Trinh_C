/* giải PT bậc 2
*/
#include "stdio.h"
#include "conio.h"
#include "math.h"

int main()
{
    double a,b,c,delta,x1,x2;
    printf("Nhap cac he so a,b,c cua PT bac 2:");
    scanf("%lf%lf%lf",&a,&b,&c);
    delta = b*b -4*a*c;
    if(delta<0)
    printf("PT vo nghiem");
    else if(delta == 0)
    printf("PT co nghiem kep x1 = x2 = %lf",-b/(a*2));
    else
    printf("PT co 2 nghiem\nx1 = %lf\nx2 = %lf",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
    return 0;
}