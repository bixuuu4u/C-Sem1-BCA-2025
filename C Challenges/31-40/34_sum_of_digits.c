// Wap that computes the sum of digits of an integer

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("\nPlease eter a number[2 or more digits recomanded]:");
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("\nSum of indivisual digits in %d.", sum);

    return 0;
}