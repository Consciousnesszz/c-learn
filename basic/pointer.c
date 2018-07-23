#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int num = 3;

  // 错误写法
  int *ptr_num1 = num;
  int ptr_num2 = &num;

  // 正确写法
  int *ptr_num3 = &num;

  printf("ptr1 == %p\nptr2 == %p\nptr3 == %p\n", ptr_num1, ptr_num2, ptr_num3);

  // 数组名 == 数组第一位指针
  int arr[] = {1, 2, 3};
  int *ptr_arr = arr;
  int *ptr_arr_first = &arr[0];
  printf("\nptr_arr == %p\nptr_arr_first == %p\n", ptr_arr, ptr_arr_first);

  /**
   * 使用指针访问数组元素
   * 每次循环 指针会根据数组类型长度 sizeof(T) 自增（加减同理）。当前数组单位长度为 sizeof(int) == 4
   * 注：
   *  1. *ptr_arr++ 的方式会改变指针指向，不推荐
   *  2. 使用指针循环，每次为保险，需要先重置指针指向数组第一个元素
   */
  for (i = 0; i < 3; i++) {
    printf("\narr[%d]：%d\n*(ptr_arr_first + %d)：%d\n*ptr_arr++：%d\n", i, arr[i], i, *(ptr_arr_first + i), *ptr_arr++);
  }

  // 二维数组的指针：指针的空间问题
  int scope[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  // int *ptr_scope = scope 错误！
  int (*ptr_scope)[3] = scope;
  printf("\n二维数组的指针：scope == %p , *ptr_scope == %p\n", scope, *ptr_scope);

  // 将指针改写为数组
  int *nums = NULL;
  // 为指针动态分配 20 个字节的空间 --> 等价于 int nums[5];
  // nums = (int *)malloc(sizeof(int) * 5);
  nums = calloc(5, sizeof(int)); // 数组每个元素初始值都为 0
  free(nums); // 注：动态分配能够释放空间，优于指定空间声明数组
  nums = NULL;

  return 0;
}
