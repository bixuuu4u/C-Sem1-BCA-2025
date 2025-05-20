// Wap that askes the user asks for user for a file name,attempsts to open it,and reports whether the operation was successful or not

#include <stdio.h>

int main()
{

  char filename[100];
  printf("Enter the File name: ");
  scanf("%99s", filename);

  FILE *file;
  file = fopen(filename, "r");

  if (file != NULL)
  {
    printf("File-%s Was Opened Successfully\n", filename);
    fclose(file);
  }
  else
  {
    printf("File-%s Was Not Found\n", filename);
  }

  return 0;
}