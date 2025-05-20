#include <stdio.h>
#define PI 3.142857142857143
int main()
{
    float radius;

    printf("Enter radius of circle :");
    scanf(" %f", &radius);

    float area = 2 * PI * radius;
    printf("Perimeter of circle is %0.2f", area);

    return 0;
}