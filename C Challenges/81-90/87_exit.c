// Wap using brreak to read inputs fro the user in a loop
// and brreak the lopp if a specific keyword like exit is entered
// Wap using do-while to find password hecker until a valid password is entered

#include <stdio.h>
#include <string.h>
int main()
{
  const char EXIT[] = "exit";
  char command[50];
  while (1)
  {
    printf("Please enter your command:");
    scanf("%s", command);
    if (!strcmp(command, EXIT))
    {
      break;
    }
  }

  printf("Exited...");

  return 0;
}