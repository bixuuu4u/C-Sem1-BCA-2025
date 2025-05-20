// Wap to demonstate the use of arthimetic operators

#include <stdio.h>

int main()
{
  int a, b;
  printf("\nPlease enter first number: ");
  scanf("%d", &a);
  printf("Now, enter second number: ");
  scanf("%d", &b);

  printf("\n%d + %d =%d", a, b, a + b);
  printf("\n%d - %d =%d", a, b, a - b);
  printf("\n%d * %d =%d", a, b, a * b);
  printf("\n%d / %d =%.2f", a, b, (float)a / b);
  printf("\n%d %% %d =%d", a, b, a % b);

  return 0;
}