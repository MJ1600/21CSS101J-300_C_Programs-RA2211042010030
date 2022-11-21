#include <stdio.h>
int main()
{
  int balance, min_balance = 1000;
  
  printf("Enter balance = ");
  scanf("%d", &balance);
  
  if(balance > min_balance) {
    printf("Sufficient balance\n");
  }
  else {
    printf("Balance is low\n");
}
  return 0;
}
