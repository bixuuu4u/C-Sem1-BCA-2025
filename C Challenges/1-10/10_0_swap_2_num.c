// Wap to swap two numbers
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Please enter the first number:");
    scanf("%d", &a);
    printf("Please enter the second number:");
    scanf("%d", &b);
    printf("\nBefore Swap First:%d,Second:%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swap First:%d,Second:%d", a, b);

    return 0;
}