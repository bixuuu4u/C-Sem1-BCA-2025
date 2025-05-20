// Wap to calculate perimeter of a rectangle

#include <stdio.h>
int main()
{
    float a, b, c, d;
    printf("Please enter first side:");
    scanf("%f", &a);
    printf("Now,enter second number:");
    scanf("%f", &b);
    printf("Now,enter third number:");
    scanf("%f", &c);
    printf("Now,enter fourth number:");
    scanf("%f", &d);

    float peri = a + b + c + d;
    printf("PErimeter of the rectangle is %.2funit", peri);
    return 0;
}