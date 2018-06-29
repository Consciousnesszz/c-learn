#include <stdio.h>

void fillArray(int *array, size_t len, int (*func)(void)) {
  for (size_t i = 0; i < len; i++) {
    array[i] = func();
  }
}

int getRandomValue() {
  return rand();
}

int main() {
  int array[10];
  fillArray(array, 10, getRandomValue);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", array[i]);
  }
  return 0;
}
