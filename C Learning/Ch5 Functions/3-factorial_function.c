#include <stdio.h>
int factorial(int x);
int main()
{
    int value = 4;
    printf("The factorial of %d is %d\n", value, factorial(value));
    return 0;
}

int factorial(int x) // recursion can be also called as a loop sometimes
{
    printf("Calling factoral(%d)\n", x);
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}