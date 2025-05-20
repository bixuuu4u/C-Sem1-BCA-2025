#include <stdio.h>

int main()
{

  int num, sum = 0;
  printf("\nEnter NUM:");
  scanf("%d", &num);

  int no_of_digits = 0;
  int copy = num;
  while (copy != 0)
  {
    // printf(".");
    copy /= 10;
    no_of_digits++;
  }
  copy = num;
  //
  // printf("%d", no_of_digits)
  while (copy != 0)
  {
    // printf(".%d", copy);
    int power = 1;
    int digit = copy % 10;
    for (int i = 0; i < no_of_digits; i++)
    {
      power *= digit;
    }
    sum += power;
    copy /= 10;
  }
  // printf("Sum %d", sum);
  if (num == sum)
  {
    printf("ARmstrong.");
  }
  else
  {
    printf("Not ARmstrong.");
  }

  return 0;
}