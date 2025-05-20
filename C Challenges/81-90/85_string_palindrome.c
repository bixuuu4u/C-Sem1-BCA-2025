// Wap that checks if a given string is a palindrome and output the result

#include <stdio.h>
#include <string.h>
int is_palindrome(char arr[]);
int main()
{

  char text[20];
  printf("\nEnter your string:");
  scanf("%s", text);

  if (is_palindrome(text))
  {
    puts("Your input is palindrome.");
  }
  else
  {
    puts("Your input is not palindrome.");
  }

  return 0;
}
int is_palindrome(char arr[])
{
  int lenght = strlen(arr);
  for (int i = 0; i < lenght / 2; i++)
  {
    if (arr[i] != arr[lenght - 1 - i])
    {
      return 0;
    }
  }
  return 1;
}