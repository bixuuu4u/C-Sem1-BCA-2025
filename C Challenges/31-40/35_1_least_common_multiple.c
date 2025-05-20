#include <stdio.h>

int main()
{
    int first, second;
    printf("\nWelcome to LCM Calculator");
    printf("\nPlease enter the first number: ");
    scanf("%d", &first);
    printf("\nNow, enter the second number: ");
    scanf("%d", &second);

    int max = first > second ? first : second; // Start from max of the two numbers

    while (1)
    {
        if (max % first == 0 && max % second == 0)
        {
            printf("\nLCM of %d and %d is %d", first, second, max);
            break;
        }
        max++; // Increment by 1 to check next multiple
    }

    return 0;
}
