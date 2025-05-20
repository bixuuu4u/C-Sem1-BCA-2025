#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a = 5, b = 7;
    printf("The value of a and b:Before:is %d and %d:\n", a, b);
    printf("The sum of 5 and 7 is %d\n", sum(a, b));
    printf("The value of a and b:After:is %d and %d:\n", a, b);
    return 0;
}

int sum(int x, int y)
{
    int sum = x + y;
    x = 4434;
    y = 9999999;

    // We cannot change a main functiion variable by a function
    // Without using pointer
    return sum;
}