#include <stdio.h>

int main() {
  int arrLength = 0;
  scanf("%d", &arrLength);

  int arrVal = 0;
  int carinhas[arrLength];
  for (int i = 0; i < arrLength; i++) {
    scanf("%d", &arrVal);
    carinhas[i] = arrVal;
  }
  int aux = 0;
  int wasEnded = 0;
  do {
    for (int i = 0; i < arrLength; i++) {
      if (i == arrLength - 1) {
        printf("%d\n", carinhas[i]);
      } else {
        printf("%d ", carinhas[i]);
      }
    }
    wasEnded = 0;
    for (int i = 1; i < arrLength; i++) {
      if (carinhas[i - 1] > carinhas[i]) {
        aux = carinhas[i];
        carinhas[i] = carinhas[i - 1];
        carinhas[i - 1] = aux;
        wasEnded = 1;
      }
    }

  } while (wasEnded == 1);

  return 0;
}