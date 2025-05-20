// Wap to swap two variables using pointeres

void swap(int *, int *);

#include <stdio.h>

int main()
{

  int num1, num2;
  printf("\nPlease enter first number: ");
  scanf("%d", &num1);
  printf("Now, enter second number: ");
  scanf("%d", &num2);

  printf("Before swap\nnum1=%d  num2=%d", num1, num2);
  swap(&num1, &num2);
  printf("\nAfter swap\nnum1=%d  num2=%d", num1, num2);

  return 0;
}
void swap(int *a, int *b)
{

  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
