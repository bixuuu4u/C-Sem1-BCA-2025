#include <stdio.h>
int main()
{
    int year;
    printf("Enter year YYYY\n");
    scanf("%d", &year);
    // Conditions for leap year 2000 2400 1200 1600 ,, 100 century years and difference 400 yr
    // The years that are also devisible by 4 is leap year
    // for examlpe year = 1600 
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("The year %d is a leap year:", year);
    }
    else
    {
        printf("The year %d is a not leap year:", year);
    }

    return 0;
}