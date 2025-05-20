// Diffn Betn Call by value and Call by reference in c

#include <stdio.h>
void swap_refrence(int *a, int *b)
{
  printf("\n\nBefore Swap:Inside function x = %d, y = %d\n", *a, *b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("After Swap:Inside function x = %d, y = %d\n", *a, *b);
}
void swap_value(int a, int b)
{
  printf("\n\nBefore Swap:Inside function x = %d, y = %d\n", a, b);
  int temp = a;
  a = b;
  b = temp;
  printf("After Swap:Inside function x = %d, y = %d\n", a, b);
}

int main()
{
  int x = 5, y = 10;
  printf("Before Swap: x = %d, y = %d\n", x, y);
  printf("Call by value");
  swap_value(x, y);
  printf("After Swap: x = %d, y = %d\n", x, y);

  x = 5, y = 10;

  printf("Before Swap: x = %d, y = %d\n", x, y);
  printf("Call by reference");
  swap_refrence(&x, &y);
  printf("After Swap: x = %d, y = %d\n", x, y);
  return 0;
}
