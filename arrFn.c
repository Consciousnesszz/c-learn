#include <stdio.h>

#define LENGTH 5

void printArr(int *arr, int len) {
  for (int i = 0; i < len; i++) {
    printf("%d\n", arr[i]);
  }
}

/**
 * 数组删除逻辑
 * 数组实际是内存中一片连续的空间，只能从其头尾回收空间，从中间回收就不再连续了。
 * 例： [1, 5, 6, 7, 8] 删除 6
 * 1. 查找要删除元素的下标 2
 * 2. 从该下标开始，用后一位覆盖前一位 [1, 5, 7, 8, 8]
 * 3. 数组总长度 -1 [1, 5, 7, 8]
 */
void delete(int *arr, int input, int len) {

  for (int i = 0; i < len; i++) {
    if (arr[i] == input) {
      while (i < len) {
        arr[i] = arr[i + 1];
        i++;
      }
      break;
    }
  }
}

int main() {
  int arr[LENGTH] = {1, 7, 5, 6, 8};
  printArr(arr, LENGTH);

  delete(arr, 6, LENGTH);

  printArr(arr, LENGTH - 1);

  return 0;
}
