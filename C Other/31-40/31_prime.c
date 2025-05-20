#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      printf("%d IS NOT PRIME", num);
      return 0;
    }
  }
  printf("%d IS  PRIME", num);
  return 0;
}