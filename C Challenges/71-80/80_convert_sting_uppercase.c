// Wap to convert a input string to uppercase

#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[40];
  printf("Enter a string:");
  fgets(str, sizeof(str), stdin);
  printf("You entered:");
  puts(str);

  for (int i = 0; i < str[i] != '\0'; i++)
  {
    str[i] = toupper(str[i]);
  }
  printf("After Uppercase:");
  puts(str);

  return 0;
}