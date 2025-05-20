//Using Relational Operator in two values
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf(" %d", &a);

    printf("Enter value of b: ");
    scanf(" %d", &b);

    if (a == b)
    {
        printf("a=%d is equal with b=%d\n", a, b);
    }
    if (a > b)
    {
        printf("a=%d is greater b=%d\n", a, b);
    }
    if (a < b)
    {
        printf("a=%d is less than b=%d\n", a, b);
    }
    if (a >= b)
    {
        printf("a=%d is greater than and equal to b=%d\n", a, b);
    }
    if (a <= b)
    {
        printf("a=%d is less than and equal to b=%d\n", a, b);
    }
    if (a != b)
    {
        printf("a=%d is not equal with b=%d\n", a, b);
    }

    return 0;
}