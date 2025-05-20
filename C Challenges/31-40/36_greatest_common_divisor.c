// Wap to find Greatest Common Divisor of two numbers

#include <stdio.h>

int main()
{
    int first, second;
    printf("\nWelcome to GCD Calculator");
    printf("\nPlease enter the first number:");
    scanf("%d", &first);
    printf("\nNow,enter the second number:");
    scanf("%d", &second);
    int min = first < second ? first : second;
    for (int i = min; i >= 1; i--)
    {
        if (first % i == 0 && second % i == 0)
        {
            printf("\nGCD of %d and %d is %d", first, second, i);
            break;
        }
    }

    return 0;
}