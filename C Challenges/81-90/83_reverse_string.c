// Write a function that takes a string and reverse it in place

#include <stdio.h>
#include <string.h>
void reverse_string(char str[]);
int main()
{
  char text[100];
  printf("Welcome to Reversing a string");
  printf("\nPlease enter a text:");
  fgets(text, sizeof(text), stdin);

  puts("Original text is:");
  puts(text);
  reverse_string(text);
  puts("Reverse text is:");
  puts(text);

  return 0;
}
void reverse_string(char str[])
{
  int lenght = strlen(str);
  for (int i = 0; i < lenght / 2; i++)
  {
    char temp = str[i];
    str[i] = str[lenght - 1 - i];
    str[lenght - 1 - i] = temp;
  }
}