//Sum of N natural number
#include <stdio.h>

int main()
{
    int N;

    printf("Enter the value of N:: ");
    scanf(" %d", &N);
    int result = (N * (N + 1)) / 2;
    printf("The sum of %d Natural number is %d\n", N, result);

    return 0;
}