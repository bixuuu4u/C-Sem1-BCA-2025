// Wap that determines if a given year is a leap year
// Considering conditons like divisible by 4 but not by 100
// Unless also divisible by 400
#include <stdio.h>
int main()
{
    int year;
    printf("Please enter year:");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is leap year.", year);
    }
    else
    {
        printf("%d is not  leap year.", year);
    }

    // if (year % 400 == 0)
    // {
    //     printf("%d is leap year.", year);
    // }
    // else if (year % 100 == 0)
    // {
    //     printf("%d is not leap year.", year);
    // }
    // else if (year % 4 == 0)
    // {
    //     printf("%d is leap year.", year);
    // }
    // else
    // {
    //     printf("%d is not leap year.", year);
    // }
    return 0;
}
