// Create a simple text-based user login system that compares a stored password string using strcmp

#include <stdio.h>
#include <string.h>
int main()
{
  const char STORED_PASS[] = "Oiii";
  char password[50];
  printf("\nPlease enter your password:");
  scanf("%s", password);
  // fgets(password, sizeof(password), stdin);

  if (strcmp(password, STORED_PASS) == 0)
  {
    puts("Access Granted");
  }
  else
  {
    puts("Access Denied");
  }

  return 0;
}