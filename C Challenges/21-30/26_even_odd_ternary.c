// Wap to find number is even or odd using ternary
#include <stdio.h>

int main()
{
    int num;
    printf("\nPlease enter a number:");
    scanf("%d", &num);
    num % 2 == 0 ? printf("\n%d is even", num) : printf("\n%d is odd", num);

    return 0;
}