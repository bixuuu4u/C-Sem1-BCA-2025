// Wap to check whether a given number is prime using while

#include <stdio.h>

int main()
{
    int number;
    printf("\nPlease,enter a number:");
    scanf("%d", &number);
    if (number <= 1)
    {
        printf("\n%d is a not prime number.", number);
    }
    int i = 2;
    while (i < number)
    {
        if (number % i == 0)
        {
            printf("\n%d is a not prime number.", number);
            return 0;
        }
        i++;
    }

    printf("\n%d is a prime number.", number);

    return 0;
}