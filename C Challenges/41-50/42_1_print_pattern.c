// Wap to print
/*
*****
****
***
**
*
*/
#include <stdio.h>

int main()
{
    printf("\nReverse Right Half Pyramid\n");

    int row;
    printf("Welcome to printing pattern.\n");
    printf("Please enter the number of rows:");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}