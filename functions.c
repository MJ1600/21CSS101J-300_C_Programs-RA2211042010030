#include <stdio.h>

int power(int m, int n);

/* test powerfunction */

int main() {
  int i;
  
  for (i = 0; i < 10; ++i)
    printf("%d %d %d\n", i, power(2, i), power(-3,i));
  return 0;
}
