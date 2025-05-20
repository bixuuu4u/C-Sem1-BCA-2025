#include <stdio.h>

int main()
{
  int digit;
  printf("Enter a number [More Than 2Digits]: ");
  scanf("%d", &digit);
  int sum = 0;
  while (digit != 0)
  {
    sum += digit % 10;
    digit /= 10;
  }
  printf("\nSum of digits is :%d", sum);
  return 0;
}