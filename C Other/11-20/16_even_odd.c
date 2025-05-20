// Even or odd

#include <stdio.h>

int main()
{
  int num;
  printf("Please enter a number: ");
  scanf("%d", &num);
  if (num % 2 == 1)
  {
    printf("%d IS ODD", num);
  }
  else
    printf("%d IS EVEN", num);

  return 0;
}