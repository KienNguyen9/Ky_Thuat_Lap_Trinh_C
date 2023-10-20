/*
Thống kế cấp độ của cán bộ 
dùng toán tử for và switch
*/
#include "stdio.h"
#include "conio.h"
int can_bo[15] = {6,1,4,3,2,5,1,6,4,5,2,3,1,3,5};

int main()
{
    int dh = 0, ch = 0, pts = 0, ts = 0;
    for(int i = 0; i <15; i++)
    {
        switch(can_bo[i])
        {
            case 6: ts++;
            case 5: pts++;
            case 4: ch++;
            case 3: dh++;   
        }
        
    }
    printf("\nSo can bo dh tro len: %d",dh);
    printf("\nSo can bo ch tro len: %d",ch);
    printf("\nSo can bo pts tro len: %d",pts);
    printf("\nSo can bo ts tro len: %d",ts);
    return 0;
}