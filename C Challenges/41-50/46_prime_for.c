// Wap using for loop to display if a number is prime or not

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
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("\n%d is a not prime number.", number);
            return 0;
        }
    }

    printf("\n%d is a prime number.", number);

    return 0;
}