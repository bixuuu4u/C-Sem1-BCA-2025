// Wap to sum all odd numbers from 1 to N

#include <stdio.h>

int main()
{

    int N, sum = 0;
    printf("\nPlease Enter value of N:");
    scanf("%d", &N);
    int i = 1;
    while (i <= N)

    {
        sum += i;
        i += 2;
    }

    printf("\nSum of all odds from 1 to %d is :%d", N, sum);
    return 0;
}