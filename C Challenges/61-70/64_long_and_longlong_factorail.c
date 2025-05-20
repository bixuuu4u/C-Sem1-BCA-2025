// Wap to demonstrate the difference in range betn long and long long by calculating factorrial of 20

#include <stdio.h>
long long factorial(int);
int main()
{
    // Int 17 Negetive OP
    int fact;
    printf("Please enter the number:");
    scanf("%d", &fact);
    long long result = factorial(fact);
    printf("The factorial of %d is %lld", fact, result);
    return 0;
}
long long factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}