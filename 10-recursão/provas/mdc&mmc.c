#include <stdio.h>

int calcMDC(int a, int b) {
  if (b == 0) {
    return a;
  }
  return calcMDC(b, a % b);
}

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  int mdc = calcMDC(a, b);
  int mmc = (a * b) / mdc;
  printf("MDC = %d, MMC = %d", mdc, mmc);
  return 0;
}