// Palindrome Array With Function Without Function

#include <stdio.h>
#include <string.h>
int main()
{
  char string[100];
  printf("Enter String: ");
  fgets(string, 100, stdin);
  for (int i = 0; string[i] != '\0'; i++)
  {
    int SIZE = strlen(string);
    if (string[i] != string[SIZE - 2 - i])
    {
      // return 0;
      printf("\nNOT PALINDORME");
      break;
    }
    else
    {
      printf("\nIS PALINDORME");
      break;
    }
  }

  return 1;
}