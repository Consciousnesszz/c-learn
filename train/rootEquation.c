#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, d, x1, x2;

  printf("输入一元二次方程的三个系数 a, b, c:\n");
  scanf("%f %f %f", &a, &b, &c);

  if (a != 0) {
    d = b * b - 4 * a * c;
    if (d > 0) {
      d = sqrt(d);
      x1 = (-b + d) / (2 * a);
      x2 = (-b - d) / (2 * a);
      printf("x1 = %f, x2 = %f\n", x1, x2);
    } else if (d == 0) {
      printf("x1 = x2 = %f\n", -b / (2 * a));
    } else {
      printf("b^2 - 4ac < 0, 方程无解\n");
    }
  } else {
    printf("a 为 0，非一元二次方程\n");
  }

  return 0;
}
