// Palindrome Array With Function Without Function

#include <stdio.h>
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

  for (int i = 0; i < SIZE / 2; i++)
  {
    if (arr[i] != arr[SIZE - 1 - i])
    {
      // return 0;
      printf("\nNOT PALINDORME");
      break;
    }
    else
    {
      printf("\nIS PALINDORME");
      break;
    }
  }

  return 1;
}