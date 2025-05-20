// Wap that calculates grade based on marks
// A >90 B> 75 C >60 D>30 F<30
#include <stdio.h>

int main()
{
    printf("\nWelcome To Grade Calculator..");
    int marks;
    printf("\nPlease enter your marks:");
    scanf("%d", &marks);
    if (marks > 90)
    {
        printf("\nYou have got A grade.");
    }
    else if (marks > 75)
    {
        printf("\nYou have got B grade.");
    }
    else if (marks > 60)
    {
        printf("\nYou have got C grade.");
    }
    else if (marks > 30)
    {
        printf("\nYou have got D grade.");
    }
    else
    {
        printf("\nYou have failed the exam.");
        printf("\nWith F grade.");
    }
    return 0;
}