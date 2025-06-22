// Using recursion display fibonaccci series upto a certain number

#include <stdio.h>
#include <math.h>
int fibonacci(int);
int main()
{
    int num;
    printf("Please enter a number:");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}