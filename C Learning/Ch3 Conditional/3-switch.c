#include <stdio.h>
int main()
{
    int rating;
    printf("Enter your rating 1-5\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1:
        printf("Your rating is 1 star\n");
        break;
    case 2:
        printf("Your rating is 2 star\n");
        break;
    case 3:
        printf("Your rating is 3 star\n");
        break;
    case 4:
        printf("Your rating is 4 star\n");
        break;
    case 5:
        printf("Your rating is 5 star\n");
        break;

    default:
        printf("Invalid rating\n");
        break;
    }

    return 0;
}