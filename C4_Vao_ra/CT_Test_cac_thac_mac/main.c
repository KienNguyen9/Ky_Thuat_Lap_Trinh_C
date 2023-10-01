/* Tạo khung bằng hàm printf 
*/
#include <stdio.h>
#include <conio.h>

int main() {
  int i, j;

  // Tạo đường kẻ trên
  for (i = 0; i < 20; i++) {
    gotoxy(i, 0);
    printf("%c", 205);
  }
  printf("\n");

  // Tạo đường kẻ ngang
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 20; j++) {
      if (i == 0 || i == 9 || j == 0 || j == 19) {
        gotoxy(j, i);
        printf("%c", 186);
      } else {
        gotoxy(j, i);
        printf(" ");
      }
    }
    printf("\n");
  }

  // Tạo đường kẻ dưới
  for (i = 0; i < 20; i++) {
    gotoxy(i, 20);
    printf("%c", 205);
  }
  printf("\n");

  getch();
  return 0;
}