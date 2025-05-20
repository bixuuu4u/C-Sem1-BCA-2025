// Wap to conpute the sum of diagonal elements of a square matrix

#include <stdio.h>
const int SIZE = 3;
void print_arr(int arr[SIZE][SIZE]);
void arr_diagonal_sum(int arr[SIZE][SIZE]);
int main()
{
  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
  int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};
  arr_diagonal_sum(arr1);

  // arr 2 change const to 4
  // arr_diagonal_sum(arr2);

  return 0;
}

void arr_diagonal_sum(int arr[SIZE][SIZE])
{
  print_arr(arr);

  int left_sum = 0;
  int right_sum = 0;
  for (int i = 0; i < SIZE; i++)
  {
    left_sum += arr[i][i];
  }
  for (int i = 0; i < SIZE; i++)
  {
    right_sum += arr[i][SIZE - 1 - i];
  }

  printf("\nSum of left diagonal is :%d", left_sum);
  printf("\nSum of right diagonal is :%d", right_sum);
  int total_sum = left_sum + right_sum;
  if (SIZE % 2 == 1)
  {
    int index = SIZE / 2;
    total_sum -= arr[index][index];
  }
  printf("\nSum of total diagonal is :%d", total_sum);
}

void print_arr(int arr[SIZE][SIZE])
{
  for (int i = 0; i < SIZE; i++)
  {
    for (int j = 0; j < SIZE; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
