// Wap that categorize a person into different age groups
// Child < 13  Teen < 20  Adult < 60 Senior > 60

#include <stdio.h>

int main()
{
    printf("\nWelcome To AgeGroup Calculator..");
    int age;
    printf("\nPlease enter your age:");
    scanf("%d", &age);
    if (age < 13)
    {
        printf("\nChild.");
    }
    else if (age < 20)
    {
        printf("\nTeen.");
    }
    else if (age < 60)
    {
        printf("\nAdult.");
    }
    else
    {
        printf("\nSenior.");
    }
    return 0;
}