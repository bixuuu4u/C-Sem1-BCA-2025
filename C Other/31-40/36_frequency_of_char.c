#include <stdio.h>

int main()
{
  char text[100] = "This is a c program to count the frequency of each character";
  printf("%s\n", text);
  char ch;
  int count = 0;
  printf("Enter the char: ");
  scanf("%c", &ch);
  for (int i = 0; text[i] != '\0'; i++)
  {
    if (text[i] == ch)
    {
      count++;
    }
  }
  printf("%c in %s is %d times", ch, text, count);

  return 0;
}