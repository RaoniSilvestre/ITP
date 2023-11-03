#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *array, int size) {
  int temp, swap;
  do {
    swap = 0;
    for (int i = 1; i < size; i++) {
      if (array[i - 1] > array[i]) {
        temp = array[i - 1];
        array[i - 1] = array[i];
        array[i] = temp;
        swap = 1;
      }
    }
  } while (swap);
}

int main(int argc, char *argv[]) {
  int tam = 100;
  int *ptr;
  int size = 0;
  int realocador = 1;
  ptr = (int *)calloc(tam, sizeof(int));

  while (1) {
    if (tam - size < 10) {
      realocador++;
      ptr = (int *)realloc(ptr, sizeof(int) * tam * realocador);
      tam = tam + 100;
    }
    if (scanf("%d", &ptr[size]) == EOF) {
      break;
    }
    size++;
  }

  bubbleSort(ptr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", ptr[i]);
  }

  return 0;
}