// Palindome Number With and With Out Function
#include <stdio.h>
int is_palindrome(int num, int rev)
{
  if (num == 0)
  {
    return rev;
  }
  return is_palindrome(num / 10, rev * 10 + num % 10);
}
int main()
{
  int num;
  printf("Enter Number: ");
  scanf("%d", &num);
  if (num == is_palindrome(num, 0))
  {
    printf("%d IS PALINDROME.", num);
  }
  else
  {
    printf("%d IS NOT PALINDROME.", num);
  }
  return 0;
}