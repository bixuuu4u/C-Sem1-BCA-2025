// Wap to determine if a number is odd or even
#include <stdio.h>
int main()
{
    int number;
    printf("Please enter your number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("\nThe number is even.");
    }
    else
    {
        printf("\nThe number is odd.");
    }

    return 0;
}