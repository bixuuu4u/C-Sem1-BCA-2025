// Create a program to search an element in a 2-D array

#include <stdio.h>
int search(int arr[][3], int rows, int cols, int element);
int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
  printf("\nWelcome to Search in 2-D array.");
  int result = search(arr, 3, 3, 1);
  printf("\nSearching for 1 found %d occurenses", result);
  result = search(arr, 3, 3, 5);
  printf("\nSearching for 5 found %d occurenses", result);
  result = search(arr, 3, 3, 9);
  printf("\nSearching for 9 found %d occurenses", result);
  result = search(arr, 3, 3, 2);
  printf("\nSearching for 2 found %d occurenses", result);

  return 0;
}
int search(int arr[][3], int rows, int cols, int element)
{
  int occ = 0;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      if (arr[i][j] == element)
      {
        occ++;
      }
    }
  }
  return occ;
}