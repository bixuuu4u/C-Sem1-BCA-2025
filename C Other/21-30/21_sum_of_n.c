// Sumof n natural nums

#include <stdio.h>

int main()
{
  int n;
  printf("Pleas enter value of n: ");
  scanf("%d", &n);
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    sum += i;
  }
  printf("\nSum of %dNos is : %d", n, sum);
  return 0;
}