// Wap to check is the array is palindrome or not

#include <stdio.h>
int is_palindrome(int arr[], int size);
int main()
{
  int arr1[9] = {3, 6, 8, 4, 5, 4, 8, 6, 3};
  int arr2[4] = {1, 1, 1, 1};
  int arr3[5] = {1, 1, 1, 1, 2};
  printf("[1:True::2:False]");
  printf("\nResult for first array: %d", is_palindrome(arr1, 9));
  printf("\nResult for second array: %d", is_palindrome(arr2, 4));
  printf("\nResult for third array: %d", is_palindrome(arr3, 5));
  return 0;
}
int is_palindrome(int arr[], int size)
{

  for (int i = 0; i < size / 2; i++)
  {
    if (arr[i] != arr[size - 1 - i])
    {
      return 0;
    }
  }
  return 1;
}