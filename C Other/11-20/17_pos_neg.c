// Positive or Negetive

#include <stdio.h>

int main()
{
  int num;
  printf("Please enter a number: ");
  scanf("%d", &num);
  if (num > 0)
  {
    printf("%d IS POSITIVE", num);
  }
  else
    printf("%d IS NEGETIVE", num);

  return 0;
}