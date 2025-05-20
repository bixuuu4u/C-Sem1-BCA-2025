// Wap to print multiplication table for a given number

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
}