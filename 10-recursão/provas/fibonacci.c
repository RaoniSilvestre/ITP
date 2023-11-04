#include <stdio.h>

int countFibInRange(int n1, int n2, int current, int next, int count) {
  if (current >= n1 && current <= n2) {
    count++;
  }

  if (next > n2) {
    return count;
  }

  return countFibInRange(n1, n2, next, current + next, count);
}

int main() {
  int n1, n2;

  scanf("%d %d", &n1, &n2);


  int count = countFibInRange(n1, n2, 1, 1, 0);

  printf("Existem %d números de fibonacci entre %d e %d", count,
         n1, n2);

  return 0;
}
