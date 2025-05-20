// Palindrome Array With Function Without Function

#include <stdio.h>
#include <string.h>
int is_palindrome(char string[])
{
  for (int i = 0; string[i] != '\0'; i++)
  {
    int SIZE = strlen(string);
    if (string[i] != string[SIZE - 2 - i])
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
int main()
{
  char string[100];
  printf("Enter String: ");
  fgets(string, 100, stdin);
  if (is_palindrome(string))
  {
    printf("%s IS PALINDROME", string);
  }
  else
  {
    printf("%s IS NOT PALINDROME", string);
  }
  return 1;
}