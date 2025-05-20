// wap to define a constant for the mathematical value pi(3.1415)
// USe it to calculate and print area of a circle with a radius input from user

#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    float r;
    printf("Enter radius of circle:");
    scanf("%f", &r);
    printf("The area of circle is %.2fsqunit", PI * r * r);

    return 0;
}