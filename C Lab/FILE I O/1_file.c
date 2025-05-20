#include <stdio.h>

int main()
{

  FILE *file;
  char text[100];
  // This is absolute path
  file = fopen("D:\\Visual Studio Codes\\C Lab\\FILE I O\\1.txt", "r");
  // This is relative path
  file = fopen("1.txt", "r");
  if (file == NULL)
  {
    printf("Error Opening File.");
    return 1;
  }

  // fgets(text, 100, file);
  // printf("%s ", text);

  char c;
  do
  {
    c = fgetc(file);
    printf("%c ", c);
  } while (c != EOF);

  int result = fclose(file);
  printf("%d", result);
  file = NULL;
  return 0;
}