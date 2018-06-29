#include <stdio.h>
#include <string.h>

// union 使用同一块内存，存储不同类型的数据。
// 其长度为可能存储的最长数据大小。
// 同时访问所有数据，只有最后数据能够显示，其余数据会损坏
union Data {
  int i;
  float f;
  char str[20];
};


int main() {

  union Data data;

  printf("size of union: %lu\n", sizeof(data));

  data.i = 1;
  printf("单独查询 union data.i: %d\n", data.i);

  data.f = 345.34;
  printf("单独查询 union data.i: %f\n", data.f);

  strcpy(data.str, "hello world");
  printf("单独查询 union data.i: %s\n", data.str);

  printf("同时查询 union data: %d\n%f\n%s\n", data.i, data.f, data.str);

  return 0;
}
