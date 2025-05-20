// Matrix multiplucation

#include <stdio.h>
#define MAX 10

void inputMatrix(int matrix[MAX][MAX], int row, int col);
void printMatrix(int matrix[MAX][MAX], int row, int col);
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2);

int main()
{
  printf("Welcome to MATRIC MULTIPLICATION:\n\n");
  int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX] = {0};
  int r1, c1, r2, c2;
  printf("\nEnter Row and Coloum size for matrix A: ");
  scanf("%d %d", &r1, &c1);
  printf("Enter Row and Coloum size for matrix B: ");
  scanf("%d %d", &r2, &c2);

  if (c1 != r2)
  {
    printf("As c1=%d and r2=%d.. Not equal multiplication not possible");
    return 1;
  }

  printf("Enter elements for A:");
  inputMatrix(A, r1, c1);

  printf("Enter elements for B:");
  inputMatrix(B, r2, c2);

  printMatrix(A, r1, c1); 
  printMatrix(B, r2, c2);

  multiplyMatrices(A, B, result, r1, c1, c2);
  printf("\nResultant :");
  printMatrix(result, r1, c2);

  return 0;
}
void multiplyMatrices(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2)
{
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      for (int k = 0; k < c1; k++)
      {
        // printf("i:%d,j:%d,k:%d\n", i, j, k);  //Debug
        result[i][j] += A[i][k] * B[k][j];
        // printf("%d = %d*%d\n", result[i][j], A[i][k], B[k][j]);  //Debug
      }
    }
  }
}
void printMatrix(int matrix[MAX][MAX], int row, int col)
{
  printf("\n----------------------\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}

void inputMatrix(int matrix[MAX][MAX], int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d%d:", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}