// Palindrome Array With Function Without Function

#include <stdio.h>
int is_palindome(int arr[], int SIZE)
{
  for (int i = 0; i < SIZE / 2; i++)
  {
    if (arr[i] != arr[SIZE - 1 - i])
    {
      return 0;
    }
    else
    {
      return 1;
    }
  }
}
int main()
{
  int SIZE;
  printf("Enter arrray size: ");
  scanf("%d", &SIZE);
  int arr[SIZE];
  //
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", arr[i]);
  }
  if (is_palindome(arr, SIZE))
  {
    printf("IS PALINDROME");
  }
  else
  {
    printf("IS NOT PALINDROME");
  }

  return 1;
}