// Wap to reverse a reverse the digits of a number
#include <stdio.h>

int main()
{
    int number, reverse = 0, num;
    printf("\nPlease,enter a number[2 Or more digits recomanded]:");
    scanf("%d", &number);
    num = number;
    int i = 0;
    while (i < number)
    {
        reverse = reverse * 10 + (number % 10);
        number /= 10;
    }
    printf("\nActual Number:%d", num);
    printf("\nReversed Number:%d", reverse);
    return 0;
}