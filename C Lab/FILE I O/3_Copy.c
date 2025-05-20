#include <stdio.h>
int main()
{
  const char *f_source = "Source.txt";
  const char *f_destination = "Destination.txt";
  FILE *source, *destination;
  source = fopen(f_source, "w");

  // printf("1");
  if (!source)
  {
    perror("Error Opening File..");
  }
  char text[100];

  // printf("2");
  printf("Enter Something to Source: ");
  fgets(text, 100, stdin);
  fprintf(source, "%s", text);
  // printf("3");
  fclose(source);
  destination = fopen(f_destination, "a");
  source = fopen(f_source, "r");
  if (!destination || !source)
  {
    perror("Error Opening File..");
    fclose(source);
  }
  // printf("4");/\

  char ch;
  while ((ch = fgetc(source)) != EOF)
  {
    printf(".");
    fputc(ch, destination);
  }
  // printf("5");

  fclose(source);
  fclose(destination);
  return 0;
}