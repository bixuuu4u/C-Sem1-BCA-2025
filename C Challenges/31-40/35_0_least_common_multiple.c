// Wap to find Least Common Multiple of two numbers

#include <stdio.h>

int main()
{
    int first, second;
    printf("\nWelcome to LCM Calculator");
    printf("\nPlease enter the first number:");
    scanf("%d", &first);
    printf("\nNow,enter the second number:");
    scanf("%d", &second);

    int min = first < second ? first : second;
    int max = first * second;

    for (int i = min; i <= max; i++)
    {
        if (i % first == 0 && i % second == 0)
        {
            printf("\nLCM of %d and %d is %d", first, second, i);
            break;
        }
    }

    return 0;
}