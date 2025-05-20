// Wap that copies one text file's contents to another ,stopping when it reaches EOF of the source file
#include <stdio.h>

int main()
{
  const char source_name[] = "99.txt";
  const char destination_name[] = "101_copy.txt";

  FILE *source = fopen(source_name, "r");
  FILE *destination = fopen(destination_name, "w");

  if (source == NULL || destination == NULL)
  {
    printf("Error while opening file.");
    return 1;
  }
  while (1)
  {
    char c = fgetc(source);

    if (c == EOF)
      break;

    fputc(c, destination);
    printf(".");
  }

  fclose(source);
  fclose(destination);
  source = destination = NULL;
  return 0;
}