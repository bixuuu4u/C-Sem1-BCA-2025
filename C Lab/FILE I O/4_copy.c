#include <stdio.h>

int main()
{
  FILE *src, *dst;

  src = fopen("Source.txt", "r");
  if (!src)
  {
    perror("Error");
  }

  char ch;
  dst = fopen("Destination.txt", "a");
  if (!dst)
  {
    perror("Error");
  }
  while ((ch = fgetc(src)) != EOF)
  {
    printf(".");
    putc(ch, dst);
  }

  fclose(src);
  fclose(dst);
  return 0;
}