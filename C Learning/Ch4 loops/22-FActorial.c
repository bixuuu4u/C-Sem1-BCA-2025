#include <stdio.h>
int main()
{
    unsigned long long fac = 1;
    int n;
    printf("Enter the value of N :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        fac *= i;
    }
    printf("Factorial of %d is %llu", n, fac);

    return 0;
}