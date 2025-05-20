// USe printf with format specifiers to format and print date string 9day ,month ,year)

#include <stdio.h>

int main()
{
  char day[10];
  char month[15];
  int year;

  printf("Enter the current day:");
  scanf("%s", day);
  printf("Enter the current month:");
  scanf("%s", month);
  printf("Enter the current year:");
  scanf("%d", &year);

  printf("\nThe current date is: %s:%s:%04d", day, month, year);
  return 0;
}