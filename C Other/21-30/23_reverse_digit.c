#include <stdio.h>

int main()
{
  int num, rev = 0, copy;
  printf("Enter a number [More Than 2Digits]: ");
  scanf("%d", &num);
  copy = num;

  while (copy > 0)
  {
    rev = rev * 10 + copy % 10;
    copy /= 10;
  }
  printf("\nOriginal Num:%d\nReverse Num:%d", num, rev);

  return 0;
}