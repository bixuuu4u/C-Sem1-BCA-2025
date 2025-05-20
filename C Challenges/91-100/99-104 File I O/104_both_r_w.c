// Wap that performs both reading and writing operations on a file called data.txt

#include <stdio.h>

int main()
{
  FILE *file = fopen("104_data.txt", "r+");
  if (!file)
  {
    printf("Error Opening File...");
    return 1;
  }

  char temp[100];
  fgets(temp, 100, file);
  printf("Reading from file found:\n %s", temp);

  fseek(file, 0, SEEK_END);
  fputs("\nThis is written by program", file);

  fclose(file);
  file = NULL;

  return 0;
}