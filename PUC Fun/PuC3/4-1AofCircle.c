#include <stdio.h>
#define PI 3.142857142857143
int main()
{
    float radius, area;

    printf("Enter radius of circle :");
    scanf(" %f", &radius);

    area = PI * radius * radius;
    printf("Area of the circle with radius %0.2f is %0.2f ", radius, area);

    return 0;
}