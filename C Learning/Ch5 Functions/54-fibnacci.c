#include <stdio.h>
int fibnacci(int x);
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d", &n);
    printf("The %dth fibnaci element is %d\n", n, fibnacci(n));
    return 0;
}
int fibnacci(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return fibnacci(x - 1) + fibnacci(x - 2);
    }
}
