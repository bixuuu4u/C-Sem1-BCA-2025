// Palindrome

#include <stdio.h>
int is_palindrome(int n);
int main()
{
  int num;
  printf("Enter Number To Check For Palindrome: ");
  scanf("%d", &num);
  if (is_palindrome(num))
  {
    printf("%d IS PALINDROME", num);
  }
  else
  {
    printf("%d IS NOT PALINDROME", num);
  }
  return 0;
}
int is_palindrome(int n)
{
  int copy = n;
  int rev = 0;
  while (copy != 0)
  {
    rev = rev * 10 + copy % 10;
    copy /= 10;
  }
  if (n == rev)
  {
    return 1;
  }
  return 0;
}