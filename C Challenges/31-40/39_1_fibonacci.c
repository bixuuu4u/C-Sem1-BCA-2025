// WAP to print first n Fibonacci numbers

#include <stdio.h>
int main()
{
    int n;
    printf("Welcome to Fibonacci Number\n");
    printf("Please enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    int first = 0, second = 1;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            printf("%d", first);
        else if (i == 1)
            printf(" %d", second);
        else
        {
            int next = first + second;
            printf(" %d", next);
            first = second;
            second = next;
        }
    }

    return 0;
}
