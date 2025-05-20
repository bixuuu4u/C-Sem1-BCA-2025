// Read a line of text from user using fgets and the print it using puts
#include <stdio.h>

int main()
{
  char name[25];
  printf("Please enter your full name:");
  fgets(name, sizeof(name), stdin);
  printf("The name you entered is:");
  puts(name);

  return 0;
}