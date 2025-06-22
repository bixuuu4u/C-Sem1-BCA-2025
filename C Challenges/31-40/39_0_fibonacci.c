// Wap to to print Fibonacci series up to a certain number

#include <stdio.h>
int main()
{
    int number;
    printf("Welcome to Fibonacci Number\n");
    printf("Please enter a number:");
    scanf("%d", &number);
    printf(" 0");
    if (number > 0)
    {
        printf(" 1");
    }
    int prev = 0;
    int next = 1;
    while (prev + next <= number)
    {
        int temp = prev + next;
        printf(" %d", temp);
        prev = next;
        next = temp;
    }
    return 0;
}