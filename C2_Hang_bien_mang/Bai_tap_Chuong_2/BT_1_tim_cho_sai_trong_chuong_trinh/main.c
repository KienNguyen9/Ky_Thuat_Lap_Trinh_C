/*Tìm chỗ sai trong chương trình sau*/
#include "stdio.h"
int main()
{
    FILE * fp;
    fp = fopen("file.txt","w+");
    fprintf(fp,"\na + %10.0f, b = %10d, c = %101d, d = %10d",-3456,25e3,5635,456398561);
    fclose(fp);
    return 0;
}