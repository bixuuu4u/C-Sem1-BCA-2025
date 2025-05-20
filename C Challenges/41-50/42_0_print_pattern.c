// Wap to print
/*
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>

int main()
{
    printf("Right Half Pyramid\n");
    int row;
    printf("Welcome to printing pattern.\n");
    printf("Please enter the number of rows:");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}