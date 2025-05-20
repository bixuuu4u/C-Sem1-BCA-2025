// Wap to calculata absolute value of a given integer using ternary operator

#include <stdio.h>

int main()
{
    int num;
    printf("\nPlease ,enter a number:");
    scanf("%d", &num);
    printf("\n%d is the absolute value", (num > 0) ? num : -num);

    // num < 0 ? printf("\nAbsolute Value o %d is %d", num, -num) : printf("\nAbsolute Value o %d is %d", num, (num));

    return 0;
}