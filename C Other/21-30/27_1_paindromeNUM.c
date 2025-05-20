// Palindome Number With and With Out Function
#include <stdio.h>
int is_palindrome(int num);
int main()
{
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  if (is_palindrome(num))
  {
    printf("%d IS PALINDROME.", num);
  }
  else
  {
    printf("%d IS NOT PALINDROME.", num);
  }
  return 0;
}
int is_palindrome(int x)
{
  int copy = x, rev = 0;

  while (copy != 0)
  {
    // printf(".");
    rev = rev * 10 + copy % 10;
    copy /= 10;
    // printf("%d", rev);
  }
  if (rev == x)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}