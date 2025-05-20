// Wap that reads integer from a file and calculates their sum

#include <stdio.h>

int main()
{
  const char filename[] = "100.txt";
  FILE *file;
  file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("File Does't Exist\n");
    return 1;
  }
  int temp;
  int sum = 0;
  // int read;

  // Fscanf returns a number if 1 then perfectly read if 0 not
  // read = fscanf(file, "%d", &temp);

  while (fscanf(file, "%d", &temp) == 1)
  {
    sum += temp;
  }
  printf("Sum of numbers in %s file is %d", filename, sum);
  fclose(file);
  file = NULL;

  return 0;
}