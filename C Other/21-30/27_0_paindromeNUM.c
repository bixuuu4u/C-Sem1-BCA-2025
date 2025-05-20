// Palindome Number With and With Out Function
#include <stdio.h>

int main()
{
  int num, rev = 0;
  printf("Enter Number: ");
  scanf("%d", &num);
  int copy = num;

  while (copy != 0)
  {
    // printf(".");
    rev = rev * 10 + copy % 10;
    copy /= 10;
    // printf("%d", rev);
  }
  if (num == rev)
  {
    printf("%d IS PALINDROME.", num);
  }
  else
  {
    printf("%d IS NOT PALINDROME.", num);
  }

  return 0;
}