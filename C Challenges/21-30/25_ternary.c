// Wap to fiind minimum of two numbers using ternary operator

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("\nPlease enter first number:");
    scanf("%d", &num1);
    printf("\nNow,enter second number:");
    scanf("%d", &num2);
    int min = num1 < num2 ? num1 : num2;
    printf("\nMin:%d", min);

    return 0;
}