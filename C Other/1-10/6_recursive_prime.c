// Wap recursive function to check for a prime no betn 1 to n

#include <stdio.h>
int is_prime(int num, int i);
int main()
{
  int n;
  printf("Enter the value of N: ");
  scanf("%d", &n);
  is_prime(n, n - 1);

  if (is_prime(n, n - 1))
  {
    printf("%d is prime", n);
  }
  else
  {
    printf("%d is not prime", n);
  }
  return 0;
}

int is_prime(int num, int i)
{
  if (num < 2)
    return 0;
  if (i == 1)
    return 1;
  if (num % i == 0)
    return 0;
  return is_prime(num, i - 1);
}