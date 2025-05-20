// Wap to promt the user to enter a +ve number
// USe do while to keep askking for the number until the user enters a valid postitve number
#include <stdio.h>

int main()
{
    int number;
    do
    {
        printf("\nPlease enter a positve number:");
        scanf("%d", &number);
    } while (number < 0);
    printf("\n%d", number);

    return 0;
}