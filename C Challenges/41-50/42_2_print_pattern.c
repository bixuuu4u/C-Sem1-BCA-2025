// Wap to print
/*
Reverse Tringle
 *
  **
 ***
 ****
 *****
 */
#include <stdio.h>

int main()
{
    printf("\nLeft Half Pyramid");
    int row;
    printf("Welcome to printing pattern.\n");
    printf("Please enter the number of rows:");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int k = 0; k < row - i; k++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
