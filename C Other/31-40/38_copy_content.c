#include <stdio.h>

int main()
{
  const char *src_filename = "38_src.txt";
  const char *dst_filename = "38_dst.txt";
  FILE *src, *dst;
  src = fopen(src_filename, "r");
  if (!src)
  {
    perror("Error");
  }
  char ch;
  dst = fopen(dst_filename, "w");
  if (!dst)
  {
    perror("Error");
  }
  while ((ch = fgetc(src)) != EOF)
  {
    printf(".");
    fputc(ch, dst);
  }
  fclose(src);
  fclose(dst);
  printf("\nCopied Succesfully.");
  return 0;
}