#include <stdio.h>

int sumRe(int x);
int sum(int y);
int n;

int main()
{
    printf("Ente the value of n\n");
    scanf(" %d", &n);

    printf("The sum of %d Natural number is %d\n", n, sumRe(n));
    printf("The sum using for loop of %d natural number is %d\n", n, sum(n));

    return 0;
}

// FUNCTION USING RECURSION
int sumRe(int x)
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
        int s;
        s = x + sum(x - 1);

        return s;
    }
}

// FUNCTION USING FOR LOOP
int sum(int y)
{
    int total = 0;
    for (int i = 0; i <= y; i++)
    {
        total += i;
    }
    return total;
}