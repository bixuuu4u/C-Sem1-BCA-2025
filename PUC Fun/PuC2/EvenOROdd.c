//Even or odd using if else
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf(" %d", &num);

    if (num % 2 == 0)
    {

        printf("The given num %d is even\n", num);
    }
    else
        printf("The given num %d is odd", num);

    return 0;
}