// Wap to create a simple calculator that uses switch case to perform basic arthimetic operations like addition ,sub,multiplication,division

#include <stdio.h>

int main()
{
    int first, second;
    char opr;
    printf("\nWelcome to Simple Calculator.");
    printf("\nPlease,enter first number:");
    scanf("%d", &first);
    printf("\nNow enter second number:");
    scanf("%d", &second);
    printf("\nEnter Operations[+,-,*,/]:");
    scanf(" %c", &opr);
    switch (opr)
    {
    case '+':
        printf("\n%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("\n%d - %d = %d", first, second, first - second);
        break;
    case '*':
        printf("\n%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("\n%d / %d = %f", first, second, (float)first / second);
        break;
    default:
        printf("\nInvalid Choice.");
        break;
    }
    return 0;
}