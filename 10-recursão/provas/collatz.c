#include <stdio.h>

unsigned long long int collatz(unsigned long long int x)
{
  printf("%llu\n", x);
  if (x == 1)
  {
    return 0;
  }
  if (x % 2 == 0)
  {
    return collatz(x / 2);
  }
  else
  {
    return collatz((x * 3) + 1);
  }
}

int main()
{
  unsigned long long int val = 0;
  scanf("%llu", &val);

  collatz(val);

  return 0;
}