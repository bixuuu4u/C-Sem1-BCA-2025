// wap to define a constant for the mathematical value pi(3.1415)
// USe it to calculate and print circumference of a circle with a radius input from user

#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    float r;
    printf("Enter radius of circle:");
    scanf("%f", &r);
    printf("The cricumferenece of circle is %.2funit", 2 * PI * r);

    return 0;
}