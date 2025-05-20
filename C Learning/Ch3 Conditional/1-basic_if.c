// C program to check weather the number is odd or even

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The number %d is even ", a);
    }
    else
    {
        printf("The number %d is odd", a);
    }

    return 0;
}