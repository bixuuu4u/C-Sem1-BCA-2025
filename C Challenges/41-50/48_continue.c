// Wap using continue to print only even numbers using continue for odd numbers

#include <stdio.h>

int main()
{
    int num;
    printf("\nPlease enter a number:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
            continue;
        printf("%d ", i);
    }

    return 0;
}