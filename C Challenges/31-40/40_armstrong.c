// Wap to chec if a number is an Armstrong number
// 153 -> 1^3+5^3+3^3=153

#include <stdio.h>
int main()
{
    int number;
    printf("Welcome to Armstrong Number Finder\n");
    printf("Please enter a number:");
    scanf("%d", &number);
    int sum = 0, copy = number;
    while (copy > 0)
    {
        int digit = copy % 10;
        sum += digit * digit * digit;
        copy /= 10;
    }
    if (sum == number)
    {
        printf("\nThe number %d is an Armstrong number.", number);
    }
    else
    {
        printf("\nThe number %d is not an Armstrong number.", number);
    }
    return 0;
}