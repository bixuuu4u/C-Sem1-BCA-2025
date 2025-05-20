// Wap that appends user input to the end of a log file each time its run

#include <stdio.h>
#include <string.h>

int main()
{
  FILE *file = fopen("103.txt", "a");

  if (!file)
  {
    printf("Could not open file.");
    return 1;
  }

  char input[100];
  while (1)
  {
    printf("Enter Your text[exit]:");

    fgets(input, 100, stdin);
    if (strcmp(input, "exit\n") == 0)
    {
      break;
    }
    fputs(input, file);
  }

  fclose(file);
  file = NULL;
  return 0;
}