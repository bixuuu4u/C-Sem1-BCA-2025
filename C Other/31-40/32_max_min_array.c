#include <stdio.h>
int main()
{
  int arr1[] = {4, 5, 6, 3, 2, 8, 6, 312, 22, 67};
  int max = arr1[0];
  int min = arr1[0];

  for (int i = 1; i < 10; i++)
  {
    if (max < arr1[i])
    {
      max = arr1[i];
    }
    if (min > arr1[i])
    {
      min = arr1[i];
    }
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", arr1[i]);
  }

  printf("\nMAX:%d MIN:%d", max, min);

  return 0;
}