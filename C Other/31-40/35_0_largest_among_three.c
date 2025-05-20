#include <stdio.h>

int main()
{
  int num1, num2, num3, max;
  printf("Please Enter 3 Numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  max = num1 > num2 && num1 > num3 ? num1 : num2 > num3 ? num2
                                                        : num3;
  printf("Max Aamong %d %d %d is %d", num1, num2, num3, max);
  return 0;
}