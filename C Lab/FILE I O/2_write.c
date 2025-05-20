#include <stdio.h>

int main()
{

  FILE *file;
  char text[100];
  // This is absolute path
  // file = fopen("D:\\Visual Studio Codes\\C Lab\\FILE I O\\1.txt", "r");
  // This is relative path
  file = fopen("2.txt", "w");
  if (file == NULL)
  {
    printf("Error Opening File.");
    return 1;
  }
  fprintf(file, "Hello im Biswajeet\n");
  fprintf(file, "Sq of %d is %d", 5, 5 * 5);

  int result = fclose(file);
  printf("%d", result);
  file = NULL;
  return 0;
}