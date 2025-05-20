#include <stdio.h>
#include <math.h>
int main()
{

  int num;
  double sum = 0;
  printf("\nEnter NUM:");
  scanf("%d", &num);

  int no_of_digits = 0;
  int copy = num;
  while (copy != 0)
  {
    copy /= 10;
    no_of_digits++;
  }

  copy = num;
  while (copy != 0)
  {
    int digit = copy % 10;
    sum += pow(digit, no_of_digits);
    copy /= 10;
  }
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