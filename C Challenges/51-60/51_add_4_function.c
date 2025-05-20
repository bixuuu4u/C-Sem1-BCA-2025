// Waf that adds takes 4 int parameters and return the sum

#include <stdio.h>
int sum(int, int, int, int);
int main()
{
    printf("%d", sum(4, 5, 6, 7));
    return 0;
}
int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}
