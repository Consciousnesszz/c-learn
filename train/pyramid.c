#include <stdio.h>

void printPyramid() {
  int i, j, maxSpace, rows;

  printf("请输入想要打印金字塔的层数: ");
  scanf("%d", &rows);

  maxSpace = rows - 1;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < maxSpace - i; j++) {
      printf("  ");
    }

    for (j = 0; j < 2 * i + 1; j++) {
      printf("* ");
    }

    printf("\n");
  }
}

void printYHTriangle() {
  int i, j, k, maxSpace, rows, element, denominator;

  printf("请输入想要打印杨辉三角的层数: ");
  scanf("%d", &rows);

  maxSpace = rows - 1;

  for (i = 0; i < rows; i++) {
    for (j = 0; j < maxSpace - i; j++) {
      printf("  ");
    }

    for (j = 0; j <= i; j++) {
      element = 1;
      denominator = 1;

      // 使用阶乘规律
      for (k = 1; k <= j; k++) {
        element = element * (i - k + 1);
        denominator = denominator * k;
      }

      printf("%4d", element / denominator);
    }

    printf("\n");
  }
}

void printFreudTriangle() {
  int i, j, rows, last = 0;

  printf("请输入想要打印弗洛伊德三角的层数: ");
  scanf("%d", &rows);

  for (i = 0; i < rows; i++) {
    for (j = 0; j < i + 1; j++) {
      last += 1;
      printf("%5d", last);
    }
    printf("\n");
  }
}

int main() {
  printPyramid();

  printYHTriangle();

  printFreudTriangle();

  return 0;
}
