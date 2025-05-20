// Wap to find sum of two diagonal elements

#include <stdio.h>
const int SIZE = 3;
void print_diagonal_sum(int arr[][SIZE]);
int main()
{
  printf("\nWelcome to Sum of diagonal in 2D Aray");
  int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 2, 3}};
  int arr2[4][4] = {{8, 7, 6, 5}, {1, 2, 3, 4}, {5, 8, 3, 5}, {0, 1, 8, -2}};
  print_diagonal_sum(arr1);

  return 0;
}
void print_diagonal_sum(int arr[][SIZE])
{
  int sum_left = 0;
  int sum_right = 0;
  for (int i = 0; i < SIZE; i++)
  {
    sum_left += arr[i][i];
    sum_right += arr[i][SIZE - 1 - i];
  }
  printf("\nThe sum of left diagonal is:%d", sum_left);
  printf("\nThe sum of right diagonal is:%d", sum_right);
  int total_sum = sum_left + sum_right;
  if (SIZE % 2 == 1)
  {
    int index = SIZE / 2;
    total_sum -= arr[index][index];
  }
  printf("\nThe sum of total diagonal is:%d", total_sum);
}