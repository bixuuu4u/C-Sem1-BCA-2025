/*Area of circle with user input
constant PI and negetive restrictions*/

#include <stdio.h>
#define PI 3.1428

int main()
{
    float radi;
    printf("Enter radius of circle: ");
    scanf("%f", &radi);
    if (radi < 0)
    {
        printf("Error!!\nRadius cannot be negative");
        return 1;
    }

    printf("Area of the circle with radius %0.2f is %0.2f", radi, PI * radi * radi);
    return 0;
}

