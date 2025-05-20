// Factorial
#include <stdio.h>

int main()
{
  int N, fac = 1;
  printf("\nPlease Enter value of N:");
  scanf("%d", &N);
  int i = 2;
  while (i <= N)
  {
    fac *= i;
    i++;
  }
  printf("\nFactoral of %d is %d.", N, fac);

  return 0;
}