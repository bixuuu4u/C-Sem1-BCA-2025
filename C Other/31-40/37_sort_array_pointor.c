#include <stdio.h>
int main()
{
  int arr[5] = {5, 2, 8, 1, 3};
  int size = 5, temp;
  int *ptr = arr;

  printf("Original array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }

  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1 - i; j++)
    {
      //> <
      if (*(ptr + j) > *(ptr + j + 1))
      {
        temp = *(ptr + j);
        *(ptr + j) = *(ptr + j + 1);
        *(ptr + j + 1) = temp;
      }
    }
  }

  printf("\nSorted array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }

  return 0;
}