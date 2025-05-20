// Wap using continue to sum all positive numbers

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Welcome to Sum all Positive.\n");
    do
    {
        printf("Please enter numbers:");
        scanf("%d", &num);
        if (num < 0)
            continue;
        sum += num;
    } while (num != 0);
    printf("\nSum of all Positive is %d", sum);
    return 0;
}