#include <stdio.h>

int main() {
  char str[100];
  int i;

  printf("输入字符串和数字:");
  scanf("%s %d", str, &i);
  printf("\n你输入的是: %s, %d\n", str, i);

  return 0;
}
