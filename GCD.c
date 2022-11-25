#include <stdio.h>
int main() {
  int num1, num2, i, gcd, lcm;
  printf("Enter two positive integers: ");
  //storing user input into num1 and num2
  scanf("%d %d", &num1, &num2);

  for (i = 1; i <= num1 && i <= num2; ++i) {

    // check if the current value of i is a
    // factor of both integers num1 and num2
    if (num1 % i == 0 && num2 % i == 0)
      gcd = i;
  }

  //Mathematical formula to calculate LCM from GCD
  lcm = (num1 * num2) / gcd;

  printf("LCM of two input numbers %d and %d is: %d.", num1, num2, lcm);
  return 0;
}
