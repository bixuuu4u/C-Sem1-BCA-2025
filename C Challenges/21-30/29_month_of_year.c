// Wap to print the month of the yea rbased on a number (1-12) Entered by the user
#include <stdio.h>

int main()
{
    int choice;
    printf("\nEnter a number from(1-12):");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nJanuary");
        break;
    case 2:
        printf("\nFebruary");
        break;
    case 3:
        printf("\nMarch");
        break;
    case 4:
        printf("\nApril");
        break;
    case 5:
        printf("\nMay");
        break;
    case 6:
        printf("\nJune ");
        break;
    case 7:
        printf("\nJuly ");
        break;
    case 8:
        printf("\nAugust");
        break;
    case 9:
        printf("\nSeptember");
        break;
    case 10:
        printf("\nOctober");
        break;
    case 11:
        printf("\nNovember");
        break;
    case 12:
        printf("\nDecember");
        break;

    default:
        printf("\nInvalid Number.");
        break;
    }

    return 0;
}