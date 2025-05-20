// Wap to using for loop multiplication table for a number
#include <stdio.h>

int main()
{
    int num;
    printf("\nPlease enter a number:");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        printf("\n%d*%d=%d", num, i, num * i);
    }

    return 0;

    return 0;
}