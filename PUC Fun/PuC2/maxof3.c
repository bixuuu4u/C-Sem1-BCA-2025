//Greatest among 3 using if else
#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter value of a :");
    scanf(" %d", &a);
    printf("Enter value of b :");
    scanf(" %d", &b);
    printf("Enter value of c :");
    scanf("%d", &c);

    if (a > b && a > c)

    {
        printf("A=%d is max", a);
    }
    else if (b > a && b > c)
    {
        printf("B=%d is max", b);
    }
    else
    {
        printf("c=%d is max", c);
    }

    return 0;
}