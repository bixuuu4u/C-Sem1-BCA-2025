// Wap to based on a student sscore categorize as HIgh Modrate or Low using ternary
//  High > 80 Modrate 50-80 LOw for <50

#include <stdio.h>

int main()
{
    int score;
    printf("\nPlease,enter your socre:");
    scanf("%d", &score);

    score > 80 ? printf("\nHigh.") : score > 50 ? printf("\nModrate")
                                                : printf("\nLow");
    return 0;
}