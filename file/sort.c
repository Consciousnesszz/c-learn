#include <stdio.h>

#define LENGTH 10

int arr[LENGTH] = {7, 8, 7, 6, 9, 11, 344, 23, 5, 2};
int i, j, k;

// void printArr(int *arr) {
//   for (int i = 0; i < LENGTH; i++) {
//     printf('%d\t', arr[i]);
//   }
// }

void bubbleSort(int *arr) {
  int temp;

  for (i = 0; i < LENGTH; i++) {
    for (j = 0; j < LENGTH - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  bubbleSort(arr);

  for (i = 0; i < LENGTH; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}
