#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "hello";
  char str2[] = "world";
  char str3[] = "helloworld";

  printf("str1 == %s\nstr2 == %s\nstr3 == %s\n", str1, str2, str3);
  printf("*str1 == %d\n*str2 == %d\n*str3 == %d\n", *str1, *str2, *str3);

  // strcat 将 str3 的内存位置分配给了 str1，分配了 world + \0 终止符号 总共 6 个字节
  strcat(str1, str2);
  printf("strcat(str1, str2) == %s\n", str1);

  printf("strcmp(str1, str3) == %d\n", strcmp(str1, str3));
  printf("strcmp(str1, str2) == %d\n", strcmp(str1, str2));

  printf("strlen(str1) == %lu\n", strlen(str1));

  printf("str1 == %s\nstr2 == %s\nstr3 == %s\n", str1, str2, str3);
  printf("*str1 == %d\n*str2 == %d\n*str3 == %d\n", *str1, *str2, *str3);

  return 0;
}
