#include <stdio.h>
int main()
{
    int b, h;

    printf("Enter height of tringle :");
    scanf(" %d", &h);
    printf("Enter breath of tringle :");
    scanf(" %d", &b);

    float area = 0.5 * b * h;
    printf("Area of the tringle is %0.2f ", area);

    return 0;
}