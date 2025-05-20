// USe a 2-D character array to store and display a tic tac toe board.

#include <stdio.h>

int main()
{
  char board[3][3] = {{'X', 'O', 'O'}, {'O', 'X', 'X'}, {'X', 'O', 'X'}};
  // printf("%c|%c|%c", board[0][0], board[0][1], board[0][2]);
  // printf("\n-----");
  // printf("\n%c|%c|%c", board[1][0], board[1][1], board[1][2]);
  // printf("\n-----");
  // printf("\n%c|%c|%c", board[2][0], board[2][1], board[2][2]);
  // printf("\n-----");

  for (int i = 0; i < 3; i++)
  {
    printf("\n");
    for (int j = 0; j < 3; j++)
    {
      printf("%c", board[i][j]);
      if (j < 2)
      {
        printf("|");
      }
    }
    if (i < 2)
    {
      printf("\n-----");
    }
  }
  return 0;
}