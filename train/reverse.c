#include <stdio.h>

/**
 * 利用函数作用域，递归翻转字符串
 *
 * scanf("a") --> scanf("b") --> printf("b") --> printf("a")
 */
void reverseSentence();

int main() {
  printf("输入一个字符串: ");
  reverseSentence();
  printf("\n");

  return 0;
}

void reverseSentence() {
  char c;
  scanf("%c", &c);

  if (c != '\n') {
    reverseSentence();
    printf("%c", c);
  }
}
