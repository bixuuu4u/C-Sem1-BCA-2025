// Wap to illustrate nested switch statement
#include <stdio.h>

int main()
{
  int num1, num2, choice;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Choose an operation:\n1. Addition\n2. Comparison\nEnter your choice: ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    printf("Sum = %d\n", num1 + num2);
    break;

  case 2:
    printf("Choose:\n1. Check Greater\n2. Check Equal\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      if (num1 > num2)
        printf("%d is greater.\n", num1);
      else
        printf("%d is greater.\n", num2);
      break;
    case 2:
      if (num1 == num2)
        printf("Both numbers are equal.\n");
      else
        printf("Numbers are not equal.\n");
      break;
    default:
      printf("Invalid sub-choice!\n");
    }
    break;

  default:
    printf("Invalid choice!\n");
  }

  return 0;
}
