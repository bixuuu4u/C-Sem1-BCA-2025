// Armstrong

#include <stdio.h>
int is_armstrong(int n);
int main()
{
  int num;

  printf("Enter Number To Check For Armstrong:[153/370/1634/54748] ");
  scanf("%d", &num);
  if (is_armstrong(num))
  {
    printf("\n%d IS ARMSTRONG", num);
  }
  else
  {
    printf("\n%d IS NOT ARMSTRONG", num);
  }
  return 0;
}

int is_armstrong(int n)
{
  int count = 0, sum = 0;
  int copy = n;
  while (copy != 0)
  {
    count++;
    copy /= 10;
  }
  copy = n;
  // printf("\n%d Digits in %d", count, num); // Debug
  while (copy != 0)
  {

    int digit = copy % 10;
    int power = 1;
    for (int i = 0; i < count; i++)
    {
      power *= digit;
    }
    sum += power;
    copy /= 10;
    // printf(". ");                                                                       // Debug
    // printf("\nDigit: %d, Power: %d^%d = %d ,Sum: %d", digit, digit, count, power, sum); // Debug
    // printf("Sum=%d\n", sum);
  }
  if (n == sum)
    return 1;
  else
    return 0;
}