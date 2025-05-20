#include <stdio.h>
int sum(int *a, int *b);
// sum and change the each value by 5;
int main()
{
    int x = 2, y = 3;
    printf("The value of x and y:Before:is %d and %d:\n", x, y);
    printf("The sum of x and y is %d\n", sum(&x, &y));
    printf("The value of x and y:After:is %d and %d:\n", x, y);
    return 0;
}
int sum(int *a, int *b)
{
    int value = *a + *b;
    *a += 5;
    *b += 5;

    return value;
}