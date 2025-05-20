// Create an array using calloc and fill it with random numbers,
// then use realloc to shrink the array size by half and print the remaining numbers.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int *arr = (int *)calloc(10, sizeof(int));
  if (arr == NULL)
  {
    printf("Memory error");
    return 1;
  }
  // seed random with time
  srand(time(NULL));
  for (int i = 0; i < 10; i++)
  {
    arr[i] = rand() % 100; // 0-99 Range
  }
  printf("Address of arr: %p\n", arr);
  printf("Here are your random numbers:\n");
  for (int i = 0; i < 10; i++)
  {

    printf("%d ", arr[i]);
  }

  int *shrink = (int *)realloc(arr, 5 * sizeof(int));

  if (shrink == NULL)
  {
    printf("Memory error");
    free(arr);
    arr = NULL;
    return 1;
  }
  arr = shrink;
  printf("Address of arr: %p\n", arr);

  printf("\nHere are your random numbers:\n");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }

  free(arr);
  arr = NULL;
  return 0;
}