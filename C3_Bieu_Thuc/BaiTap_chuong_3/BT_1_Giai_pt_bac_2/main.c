#include <stdio.h>
#include <math.h>

// Hàm giải phương trình bậc 2
int giaiPT(double a, double b, double c, double *x1, double *x2) {
  // Tính delta
  double delta = b * b - 4 * a * c;

  // Xử lý các trường hợp
  if (delta < 0) {
    // Vô nghiệm
    return 0;
  } else if (delta == 0) {
    // Nhị nghiệm trùng nhau
    *x1 = *x2 = -b / (2 * a);
    return 1;
  } else {
    // Hai nghiệm phân biệt
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return 2;
  }
}

int main() {
  // Nhập các hệ số của phương trình
  double a, b, c;
  printf("Nhập hệ số a: ");
  scanf("%lf", &a);
  printf("Nhập hệ số b: ");
  scanf("%lf", &b);
  printf("Nhập hệ số c: ");
  scanf("%lf", &c);

  // Giải phương trình
  double x1, x2;
  int n = giaiPT(a, b, c, &x1, &x2);

  // In kết quả
  if (n == 0) {
    printf("Phương trình vô nghiệm.\n");
  } else if (n == 1) {
    printf("Phương trình có nghiệm duy nhất x = %lf.\n", x1);
  } else {
    printf("Phương trình có hai nghiệm x1 = %lf và x2 = %lf.\n", x1, x2);
  }

  return 0;
}