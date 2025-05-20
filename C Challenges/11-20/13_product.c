// Wap to calculate product of two floating point numbers
#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Please enter first number:");
    scanf("%f", &num1);
    printf("Now,enter second number:");
    scanf("%f", &num2);
    printf("%.1f * %.1f = %.1f", num1, num2, num1 * num2);
    return 0;
}