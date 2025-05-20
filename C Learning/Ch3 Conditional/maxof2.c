//Greatest among 2 using if else
#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter two values:: ");
    scanf(" %d %d", &a, &b);
    if (a > b)
    {
        printf("A=%d is max ", a);
    }
    else
    {
        printf("B=%d is max ", b);
    }
    return 0;
}