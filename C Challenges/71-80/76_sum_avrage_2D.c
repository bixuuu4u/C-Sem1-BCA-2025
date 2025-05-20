// Wap to do sum and avarage of all elements in a 2D array

#include <stdio.h>
int sum(int arr[][3], int rows, int col);
int main()
{
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
  printf("\nWelcome to Sum And Avrage in 2-D array.");
  int result = sum(arr, 3, 3);
  float avg = result / 9.0;
  printf("\nSum of 2-D Array: %d", result);
  printf("\nAvg of 2-D Array: %.2f", avg);

  return 0;
}
int sum(int arr[][3], int rows, int cols)
{
  int sum = 0;

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      sum += arr[i][j];
    }
  }
  return sum;
}