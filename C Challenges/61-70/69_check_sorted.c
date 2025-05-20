// Wap to check if the given array is sorted

#include <stdio.h>
int is_sorted(int arr[], int size);
int main()
{
  int arr1[6] = {1, 2, 3, 4, 5, 6};
  int arr2[6] = {7, 6, 5, 4, 3, 2};
  int arr3[6] = {1, 3, 5, 3, 2, 9};
  if (is_sorted(arr1, 6))
  {
    printf("\n%d", is_sorted(arr1, 6));
    printf("\nFirst array is sorted.");
  }
  else
  {
    printf("\nFirst array is not sorted.");
  }
  if (is_sorted(arr2, 6))
  {
    printf("\nSecond array is sorted.");
  }
  else
  {
    printf("\nSecond array is not sorted.");
  }
  if (is_sorted(arr3, 6))
  {
    printf("\nThird array is sorted.");
  }
  else
  {
    printf("\nThird array is not sorted.");
  }
  return 0;
}
int is_sorted(int arr[], int size)
{
  int incresing = 1;
  int decresing = 1;
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > arr[i - 1])
    {
      decresing = 0;
    }
    else if (arr[i] < arr[i - 1])
    {
      incresing = 0;
    }
  }
  return incresing || decresing;
}
