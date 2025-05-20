// Wap using do-while to find password hecker until a valid password is entered

#include <stdio.h>
#include <string.h>
int main()
{
  const char STORED_PASS[] = "Pa$$word";
  char password[50];
  do
  {
    printf("Please enter correct password:");
    scanf("%s", password);
  } while (strcmp(password, STORED_PASS) != 0);
  printf("Access Granted;");

  return 0;
}